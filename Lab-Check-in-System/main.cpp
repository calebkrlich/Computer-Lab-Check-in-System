#include <QApplication>
#include <QMainWindow>
#include "homepageview.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    HomePageView h;
    h.show();

    return app.exec();
}
