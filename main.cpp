#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    printf("Hellogit!\n");

    printf("HelloWorld!\n");

    return a.exec();
}
