#include <QApplication>
#include <QMainWindow>
#include "homepageview.h"
#include "databasecontrollersingleton.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    HomePageView h;


    //RE-ENABLE WHEN DATABASE CONTROL IS UPDATED TO NEW SINGLETON VERSION
    //qInfo() << DatabaseControllerSingleton::getInstance()->connectToDatabase();
    h.show();

    return app.exec();
}
