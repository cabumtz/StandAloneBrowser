#ifndef APPSERVERPROCESS_H
#define APPSERVERPROCESS_H

#include <QObject>
#include <QProcess>

class AppServerProcess : public QProcess
{
	Q_OBJECT
public:
	explicit AppServerProcess(QObject *parent = 0);
	
signals:
	
public slots:
	
};

#endif // APPSERVERPROCESS_H
