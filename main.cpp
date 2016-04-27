#include "mainwindow.h"
#include "global.h"
#include "wrapper.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    wrap = new wrapper();
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
