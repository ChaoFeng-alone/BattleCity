/********************************************************************************
** Form generated from reading UI file 'YGE.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YGE_H
#define UI_YGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_YGEClass
{
public:

    void setupUi(QWidget *YGEClass)
    {
        if (YGEClass->objectName().isEmpty())
            YGEClass->setObjectName(QString::fromUtf8("YGEClass"));
        YGEClass->resize(600, 400);

        retranslateUi(YGEClass);

        QMetaObject::connectSlotsByName(YGEClass);
    } // setupUi

    void retranslateUi(QWidget *YGEClass)
    {
        YGEClass->setWindowTitle(QApplication::translate("YGEClass", "YGE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class YGEClass: public Ui_YGEClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YGE_H
