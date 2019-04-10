#include <QApplication>
#include <QMainWindow>
#include "homepageview.h"
#include "databasecontrollersingleton.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    qInfo() << "Database Status: " << DatabaseControllerSingleton::getInstance()->connectToDatabase();

    HomePageView h;
    h.show();

    return app.exec();
}
