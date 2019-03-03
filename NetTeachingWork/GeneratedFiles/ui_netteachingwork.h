/********************************************************************************
** Form generated from reading UI file 'netteachingwork.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETTEACHINGWORK_H
#define UI_NETTEACHINGWORK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NetTeachingWorkClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_Login;
    QPushButton *pushButton_Register;
    QLabel *label;
    QLabel *label_2;
    QPlainTextEdit *plainTextEdit_UserName;
    QPlainTextEdit *plainTextEdit_Password;
    QLabel *label_3;

    void setupUi(QMainWindow *NetTeachingWorkClass)
    {
        if (NetTeachingWorkClass->objectName().isEmpty())
            NetTeachingWorkClass->setObjectName(QString::fromUtf8("NetTeachingWorkClass"));
        NetTeachingWorkClass->resize(404, 324);
        centralWidget = new QWidget(NetTeachingWorkClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton_Login = new QPushButton(centralWidget);
        pushButton_Login->setObjectName(QString::fromUtf8("pushButton_Login"));
        pushButton_Login->setGeometry(QRect(50, 240, 61, 31));
        pushButton_Register = new QPushButton(centralWidget);
        pushButton_Register->setObjectName(QString::fromUtf8("pushButton_Register"));
        pushButton_Register->setGeometry(QRect(220, 240, 61, 31));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 110, 54, 12));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 160, 54, 12));
        plainTextEdit_UserName = new QPlainTextEdit(centralWidget);
        plainTextEdit_UserName->setObjectName(QString::fromUtf8("plainTextEdit_UserName"));
        plainTextEdit_UserName->setGeometry(QRect(120, 100, 161, 31));
        plainTextEdit_Password = new QPlainTextEdit(centralWidget);
        plainTextEdit_Password->setObjectName(QString::fromUtf8("plainTextEdit_Password"));
        plainTextEdit_Password->setGeometry(QRect(120, 160, 161, 31));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(130, 50, 151, 31));
        NetTeachingWorkClass->setCentralWidget(centralWidget);

        retranslateUi(NetTeachingWorkClass);

        QMetaObject::connectSlotsByName(NetTeachingWorkClass);
    } // setupUi

    void retranslateUi(QMainWindow *NetTeachingWorkClass)
    {
        NetTeachingWorkClass->setWindowTitle(QApplication::translate("NetTeachingWorkClass", "NetTeachingWork", nullptr));
        pushButton_Login->setText(QApplication::translate("NetTeachingWorkClass", "\347\231\273\345\275\225", nullptr));
        pushButton_Register->setText(QApplication::translate("NetTeachingWorkClass", "\346\263\250\345\206\214", nullptr));
        label->setText(QApplication::translate("NetTeachingWorkClass", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_2->setText(QApplication::translate("NetTeachingWorkClass", "\345\257\206\347\240\201\357\274\232", nullptr));
        label_3->setText(QApplication::translate("NetTeachingWorkClass", "\347\275\221\347\273\234\344\275\234\344\270\232\346\217\220\344\272\244\344\270\216\346\211\271\346\224\271\347\263\273\347\273\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NetTeachingWorkClass: public Ui_NetTeachingWorkClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETTEACHINGWORK_H
