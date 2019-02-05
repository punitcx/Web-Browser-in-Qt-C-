#include "mainapplication.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    MainApplication a(argc, argv);
    a.newmainwindow();



    return a.exec();
}
