#ifndef CHECKIMANUALVIEW_H
#define CHECKIMANUALVIEW_H

#include <QDialog>

namespace Ui {
class CheckIManualView;
}

class CheckIManualView : public QDialog
{
    Q_OBJECT

public:
    explicit CheckIManualView(QWidget *parent = nullptr);
    ~CheckIManualView();

private:
    Ui::CheckIManualView *ui;
};

#endif // CHECKIMANUALVIEW_H
