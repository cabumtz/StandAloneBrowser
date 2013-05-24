#ifndef BROWSERDIALOG_H
#define BROWSERDIALOG_H

#include <QDialog>
#include <QWebView>

namespace Ui {
class BrowserDialog;
}

class BrowserDialog : public QDialog
{
	Q_OBJECT
	
public:
	explicit BrowserDialog(QWidget *parent = 0);
	~BrowserDialog();

	QWebView* getWebView();

protected:
	void paintEvent(QPaintEvent *);
	void mousePressEvent(QMouseEvent *);
	void mouseMoveEvent(QMouseEvent *);
	
protected:
	Ui::BrowserDialog *ui;
	QPoint dragPosition;
};

#endif // BROWSERDIALOG_H
