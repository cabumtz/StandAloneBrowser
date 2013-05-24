
#include <QDebug>
#include <QUrl>
#include <QCloseEvent>

#include "maindialog.h"
//#include "ui_maindialog.h"

MainDialog::MainDialog(QWidget *parent) :
	BrowserDialog(parent),
	//ui(new Ui::MainDialog),
	appServerProcess(this)
{
	initAppServer();
	initGui();

	QMetaObject::connectSlotsByName(this);


	appServerProcess.startServer();

}

MainDialog::~MainDialog()
{

}

void MainDialog::closeEvent(QCloseEvent * event)
{
	this->on_actionExit_triggered();
	event->accept();
}




void MainDialog::initAppServer()
{
	this->appServerProcess.setObjectName("appServerProcess");
}

void MainDialog::initGui()
{
	this->resize(800,600);
}


void MainDialog::on_appServerProcess_started()
{
	QUrl url("http://localhost:8000/admin/");
	ui->webview->setUrl(url);
}

void MainDialog::on_appServerProcess_finished(int exitCode, QProcess::ExitStatus exitStatus)
{
	qDebug() << "exitCode: " << exitCode << " exitStatus: " << exitStatus;
}

void MainDialog::on_actionExit_triggered()
{
	qDebug() << "on_actionExit_triggered - starting exit process";

	appServerProcess.stopServer();
	QApplication::quit();
}
