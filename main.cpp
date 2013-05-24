//#include "mainwindow.h"

#include "maindialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
	//MainWindow w;
	//w.show();

	MainDialog d;
	d.show();
    
    return a.exec();
}
