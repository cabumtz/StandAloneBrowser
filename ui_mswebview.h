/********************************************************************************
** Form generated from reading UI file 'mswebview.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MSWEBVIEW_H
#define UI_MSWEBVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MsWebView
{
public:

    void setupUi(QWidget *MsWebView)
    {
        if (MsWebView->objectName().isEmpty())
            MsWebView->setObjectName(QStringLiteral("MsWebView"));
        MsWebView->resize(400, 300);

        retranslateUi(MsWebView);

        QMetaObject::connectSlotsByName(MsWebView);
    } // setupUi

    void retranslateUi(QWidget *MsWebView)
    {
        MsWebView->setWindowTitle(QApplication::translate("MsWebView", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class MsWebView: public Ui_MsWebView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MSWEBVIEW_H
