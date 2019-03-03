#pragma once

#include <QDialog>
#include "ui_TeacherForm.h"

class TeacherForm : public QDialog
{
	Q_OBJECT

public:
	TeacherForm(QWidget *parent = Q_NULLPTR);
	~TeacherForm();

private:
	Ui::TeacherForm ui;
};
