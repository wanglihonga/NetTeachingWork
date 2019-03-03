/********************************************************************************
** Form generated from reading UI file 'studentform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTFORM_H
#define UI_STUDENTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_StudentForm
{
public:

    void setupUi(QDialog *StudentForm)
    {
        if (StudentForm->objectName().isEmpty())
            StudentForm->setObjectName(QString::fromUtf8("StudentForm"));
        StudentForm->resize(400, 300);

        retranslateUi(StudentForm);

        QMetaObject::connectSlotsByName(StudentForm);
    } // setupUi

    void retranslateUi(QDialog *StudentForm)
    {
        StudentForm->setWindowTitle(QApplication::translate("StudentForm", "StudentForm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentForm: public Ui_StudentForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTFORM_H
