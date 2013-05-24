#ifndef DJANGOAPPSERVERPROCESS_H
#define DJANGOAPPSERVERPROCESS_H

#include <QObject>

#include "appserverprocess.h"

class DjangoAppServerProcess : public AppServerProcess
{
	Q_OBJECT
public:
	explicit DjangoAppServerProcess(QObject *parent = 0);


public slots:
	void startServer();
	void stopServer();
	
signals:
	

};

#endif // DJANGOAPPSERVERPROCESS_H
