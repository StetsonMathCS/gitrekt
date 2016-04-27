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
>>>>>>> 2f26ad0903a2114b58ab460974f0dd2041f3781f
