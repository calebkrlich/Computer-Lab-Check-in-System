#include "savelogsview.h"
#include "ui_savelogsview.h"

SaveLogsView::SaveLogsView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SaveLogsView)
{
    ui->setupUi(this);
}

SaveLogsView::~SaveLogsView()
{
    delete ui;
}

void SaveLogsView::on_DirectoryButton_clicked()
{
    QFileDialog fileDialog;

    fileDirectory = fileDialog.getExistingDirectory(this,"Save File Directory...");
    ui->FileLocationLineEdit->setText(fileDirectory);
}

void SaveLogsView::on_CancelButton_clicked()
{
    this->close();
}

void SaveLogsView::on_SaveButton_clicked()
{
    QFile fileToSave;
    fileToSave.setFileName(ui->FileLocationLineEdit->text() + "/" + ui->FileNameLineEdit->text() + ".csv");
    fileToSave.open(QFile::WriteOnly);

    if(ui->LogsCheckBox->isChecked())
    {
        QList<QString> logs;
        logs = DatabaseControllerSingleton::getInstance()->
                getLogs(ui->StartTimeEdit->dateTime().toString("yyyy-MM-dd hh:mm:ss"),
                        ui->EndTimeEdit->dateTime().toString("yyyy-MM-dd hh:mm:ss"));

        for(int i = 0; i < logs.length(); i++)
        {
            QTextStream stream(&fileToSave);
            stream << logs[i] + "\n";
        }
    }


    fileToSave.close();
}
