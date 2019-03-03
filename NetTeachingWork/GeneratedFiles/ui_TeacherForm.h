/********************************************************************************
** Form generated from reading UI file 'TeacherForm.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERFORM_H
#define UI_TEACHERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_TeacherForm
{
public:

    void setupUi(QDialog *TeacherForm)
    {
        if (TeacherForm->objectName().isEmpty())
            TeacherForm->setObjectName(QString::fromUtf8("TeacherForm"));
        TeacherForm->resize(400, 300);

        retranslateUi(TeacherForm);

        QMetaObject::connectSlotsByName(TeacherForm);
    } // setupUi

    void retranslateUi(QDialog *TeacherForm)
    {
        TeacherForm->setWindowTitle(QApplication::translate("TeacherForm", "TeacherForm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TeacherForm: public Ui_TeacherForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERFORM_H
