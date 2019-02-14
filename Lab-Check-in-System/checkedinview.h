#ifndef CHECKEDINVIEW_H
#define CHECKEDINVIEW_H

#include <QDialog>

namespace Ui {
class CheckedInView;
}

class CheckedInView : public QDialog
{
    Q_OBJECT

public:
    explicit CheckedInView(QWidget *parent = nullptr);
    ~CheckedInView();

private:
    Ui::CheckedInView *ui;
};

#endif // CHECKEDINVIEW_H
