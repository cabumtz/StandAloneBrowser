#ifndef MAINDIALOG_H
#define MAINDIALOG_H

#include "browserdialog.h"
#include "ui_browserdialog.h"
#include "djangoappserverprocess.h"

//namespace Ui {
//class MainDialog;
//}

class MainDialog : public BrowserDialog
{
	Q_OBJECT
	
public:
	explicit MainDialog(QWidget *parent = 0);
	~MainDialog();


protected:
	void closeEvent(QCloseEvent *);

private:
	void initAppServer();
	void initGui();

private slots:
	void on_appServerProcess_started();
	void on_appServerProcess_finished(int exitCode, QProcess::ExitStatus exitStatus);

	void on_actionExit_triggered();

private:
	//Ui::MainDialog *ui;
	DjangoAppServerProcess appServerProcess;


};

#endif // MAINDIALOG_H
