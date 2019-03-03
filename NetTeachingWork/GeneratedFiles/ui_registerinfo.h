/********************************************************************************
** Form generated from reading UI file 'registerinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERINFO_H
#define UI_REGISTERINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterInfo
{
public:
    QLabel *label;
    QPushButton *pushButton_Register;
    QPushButton *pushButton_Exit;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QPlainTextEdit *plainTextEdit_Username;
    QPlainTextEdit *plainTextEdit_Password;
    QPlainTextEdit *plainTextEdit_Name;
    QPlainTextEdit *plainTextEdit_Studyid;

    void setupUi(QDialog *RegisterInfo)
    {
        if (RegisterInfo->objectName().isEmpty())
            RegisterInfo->setObjectName(QString::fromUtf8("RegisterInfo"));
        RegisterInfo->resize(436, 312);
        label = new QLabel(RegisterInfo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 20, 71, 41));
        pushButton_Register = new QPushButton(RegisterInfo);
        pushButton_Register->setObjectName(QString::fromUtf8("pushButton_Register"));
        pushButton_Register->setGeometry(QRect(20, 250, 75, 23));
        pushButton_Exit = new QPushButton(RegisterInfo);
        pushButton_Exit->setObjectName(QString::fromUtf8("pushButton_Exit"));
        pushButton_Exit->setGeometry(QRect(290, 240, 75, 23));
        widget = new QWidget(RegisterInfo);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 80, 351, 151));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        plainTextEdit_Username = new QPlainTextEdit(widget);
        plainTextEdit_Username->setObjectName(QString::fromUtf8("plainTextEdit_Username"));
        plainTextEdit_Username->setMaximumSize(QSize(256, 31));

        verticalLayout_2->addWidget(plainTextEdit_Username);

        plainTextEdit_Password = new QPlainTextEdit(widget);
        plainTextEdit_Password->setObjectName(QString::fromUtf8("plainTextEdit_Password"));
        plainTextEdit_Password->setMaximumSize(QSize(256, 31));

        verticalLayout_2->addWidget(plainTextEdit_Password);

        plainTextEdit_Name = new QPlainTextEdit(widget);
        plainTextEdit_Name->setObjectName(QString::fromUtf8("plainTextEdit_Name"));
        plainTextEdit_Name->setMaximumSize(QSize(256, 31));

        verticalLayout_2->addWidget(plainTextEdit_Name);

        plainTextEdit_Studyid = new QPlainTextEdit(widget);
        plainTextEdit_Studyid->setObjectName(QString::fromUtf8("plainTextEdit_Studyid"));
        plainTextEdit_Studyid->setMaximumSize(QSize(256, 31));

        verticalLayout_2->addWidget(plainTextEdit_Studyid);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(RegisterInfo);

        QMetaObject::connectSlotsByName(RegisterInfo);
    } // setupUi

    void retranslateUi(QDialog *RegisterInfo)
    {
        RegisterInfo->setWindowTitle(QApplication::translate("RegisterInfo", "\346\263\250\345\206\214\347\225\214\351\235\242", nullptr));
        label->setText(QApplication::translate("RegisterInfo", "\347\224\250\346\210\267\346\263\250\345\206\214", nullptr));
        pushButton_Register->setText(QApplication::translate("RegisterInfo", "\347\241\256\350\256\244\346\263\250\345\206\214", nullptr));
        pushButton_Exit->setText(QApplication::translate("RegisterInfo", "\351\200\200\345\207\272", nullptr));
        label_2->setText(QApplication::translate("RegisterInfo", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_3->setText(QApplication::translate("RegisterInfo", "\345\257\206\347\240\201\357\274\232", nullptr));
        label_5->setText(QApplication::translate("RegisterInfo", "\347\234\237\345\256\236\345\247\223\345\220\215\357\274\232", nullptr));
        label_4->setText(QApplication::translate("RegisterInfo", "\345\255\246\345\217\267\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterInfo: public Ui_RegisterInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERINFO_H
