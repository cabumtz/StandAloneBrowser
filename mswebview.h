#ifndef MSWEBVIEW_H
#define MSWEBVIEW_H

#include <QtWebKitWidgets/QWebView>
#include <QWidget>

class MsWebView : public QWebView
{
    Q_OBJECT
public:
    explicit MsWebView(QWidget *parent = 0);
	void setUrl(const QUrl &url);

protected:
	QWebView* createWindow(QWebPage::WebWindowType type);


signals:
    
public slots:
    
};

#endif // MSWEBVIEW_H
