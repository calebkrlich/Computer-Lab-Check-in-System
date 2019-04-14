#ifndef SAVELOGSVIEW_H
#define SAVELOGSVIEW_H

#include <QDialog>
#include <QFileDialog>
#include "databasecontrollersingleton.h"
#include <QTextStream>

namespace Ui {
class SaveLogsView;
}

class SaveLogsView : public QDialog
{
    Q_OBJECT

public:
    explicit SaveLogsView(QWidget *parent = nullptr);
    ~SaveLogsView();

private slots:
    void on_DirectoryButton_clicked();

    void on_CancelButton_clicked();

    void on_SaveButton_clicked();

private:
    Ui::SaveLogsView *ui;

    QString fileDirectory;
};

#endif // SAVELOGSVIEW_H
