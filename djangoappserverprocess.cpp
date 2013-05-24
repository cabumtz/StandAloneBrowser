#include "djangoappserverprocess.h"
#include <QDebug>
#include <QFile>
#include <QApplication>
#include <QDir>

DjangoAppServerProcess::DjangoAppServerProcess(QObject *parent) :
	AppServerProcess(parent)
{
}

void DjangoAppServerProcess::startServer()
{
	/*QString pythonPath = "C:/Users/WICO MX 2/workspace_personal/censoproject/Portable Python 2.7.3.1/App/python.exe";
	QString djangoProjectManagePath = "C:/Users/WICO MX 2/workspace_personal/censoproject/pycensocath/manage.py";
	QString workingDirPath = "C:/Users/WICO MX 2/workspace_personal/censoproject/pycensocath";
*/
	QString pythonPath = QFileInfo("./censoproject/Portable Python 2.7.3.1/App/python.exe").absoluteFilePath();
	QString djangoProjectManagePath = QFileInfo("./censoproject/pycensocath/manage.py").absoluteFilePath();
	QString workingDirPath = QFileInfo("./censoproject/pycensocath").absoluteFilePath();

	qDebug() << "pythonPath: " << pythonPath << " exists: "
			 << QFile(pythonPath).exists();
	qDebug() << "djangoProjectManagePath: " << djangoProjectManagePath << " exists: "
			 << QFile(djangoProjectManagePath).exists();
	qDebug() << "workingDirPath: " << workingDirPath << " exists: "
			 << QFile(workingDirPath).exists();

	qDebug() << "wd1: " << QApplication::applicationDirPath();
	qDebug() << "wd2: " << QDir::currentPath();
	qDebug() << "wd3: " << QFileInfo(workingDirPath).absoluteFilePath();
	QStringList arguments;

	arguments << djangoProjectManagePath << "runserver" << "--noreload";


	qDebug() << "startServer - init";

	setWorkingDirectory(workingDirPath);

	start( pythonPath, arguments);

	qDebug() << "startServer - end";
}

void DjangoAppServerProcess::stopServer()
{
	qDebug() << "stopServer - init";

	this->terminate();
	this->close();

	qDebug() << "stopServer - end";


}
