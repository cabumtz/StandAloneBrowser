#include "browserdialog.h"
#include "ui_browserdialog.h"

#include <QMouseEvent>


BrowserDialog::BrowserDialog(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::BrowserDialog)
{
	ui->setupUi(this);
}

BrowserDialog::~BrowserDialog()
{
	delete ui;
}


QWebView* BrowserDialog::getWebView()
{
	return this->ui->webview;
}

void BrowserDialog::paintEvent(QPaintEvent * /*event*/)
{
	qreal opacity(1.0);
	int roundness(7);
	QRect widget_rect = this->rect();

	QPainter painter(this);
	painter.save();

	painter.setRenderHint(QPainter::Antialiasing);
	painter.setPen(Qt::black);

	// clip
	QPainterPath rounded_rect;
	rounded_rect.addRoundRect(1, 1, widget_rect.width() - 2, widget_rect.height() - 2, roundness, roundness);
	painter.setClipPath(rounded_rect);

	// get clipping region
	QRegion maskregion = painter.clipRegion();

	// mask the widget
	setMask(maskregion);
	painter.setOpacity(opacity);

	// fill path with color
	painter.fillPath(rounded_rect,QBrush(Qt::black));

	/*
	QRect pixmapRect = maskregion.boundingRect();
	QPixmap backgroundPixmap = QPixmap(":/backgroundImages/deep_red_hexagon_tile_background_seamless.jpg");
	//painter.drawTiledPixmap(pixmapRect,backgroundPixmap, QPoint(0,0));

	painter.drawPixmap(pixmapRect, backgroundPixmap);
*/

	// restore painter
	painter.restore();

}




void BrowserDialog::mousePressEvent(QMouseEvent *event)
{
	if (event->button() == Qt::LeftButton) {
		dragPosition = event->globalPos() - frameGeometry().topLeft();
		event->accept();
	}
}

void BrowserDialog::mouseMoveEvent(QMouseEvent *event)
{
	if (event->buttons() & Qt::LeftButton) {
		move(event->globalPos() - dragPosition);
		event->accept();
	}
}
