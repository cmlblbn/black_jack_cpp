#include "mainwindow.h"


#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowIcon(QIcon(":/res/resources/res/cards/icon31.png"));
    w.show();

    return a.exec();
}
