#ifndef MSWEBPAGE_H
#define MSWEBPAGE_H

#include <QObject>
#include <QWebPage>

class MsWebPage : public QWebPage
{
	Q_OBJECT
public:
	explicit MsWebPage(QObject *parent = 0);
	
signals:
	
public slots:
	
};

#endif // MSWEBPAGE_H
