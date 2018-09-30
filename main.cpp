#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

//Center the window.
    QSize size = qApp->desktop()->availableGeometry().size();
    int width=size.width()/2-w.width()/2;
    int height=size.height()/2-w.height()/2;
    w.move(width, height);
    w.show();

    return a.exec();
}
