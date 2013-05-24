#include "mswebview.h"
#include "browserdialog.h"

#include <QDebug>
MsWebView::MsWebView(QWidget *parent) :
    QWebView(parent)
{
	settings()->setAttribute(QWebSettings::JavascriptEnabled, true);
	settings()->setAttribute(QWebSettings::JavascriptCanOpenWindows, true);
}



QWebView* MsWebView::createWindow(QWebPage::WebWindowType type)
{
	return QWebView::createWindow(type);

	/*
	QWebView* childView;

	BrowserDialog* bd = new BrowserDialog(this);


	if(type == QWebPage::WebModalDialog)
	{
		bd->setWindowModality(Qt::ApplicationModal);
	}

	childView = bd->getWebView();

	bd->show();

	return childView;
*/
}


void MsWebView::setUrl(const QUrl &url)
{
	qDebug() << "setUrl - asked to change to: " << url;
	QWebView::setUrl(url);
}
