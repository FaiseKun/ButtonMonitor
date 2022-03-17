#include "widget.h"
#include <QApplication>
#include <QDebug>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    try{
    Widget w;
    w.show();

    return a.exec();
    }
    catch(const char* msg)
    {
        qDebug() << msg;
        QMessageBox msgBox;
        msgBox.setText(msg);
        msgBox.exec();
        a.quit();
    }
}
