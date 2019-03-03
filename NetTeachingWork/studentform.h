#pragma once

#include <QDialog>
#include "ui_studentform.h"

class StudentForm : public QDialog
{
	Q_OBJECT

public:
	StudentForm(QWidget *parent = Q_NULLPTR);
	~StudentForm();

private:
	Ui::StudentForm ui;
};
