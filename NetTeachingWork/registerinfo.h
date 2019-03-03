#pragma once

#include <QDialog>
#include "ui_registerinfo.h"

class RegisterInfo : public QDialog
{
	Q_OBJECT

public:
	RegisterInfo(QWidget *parent = Q_NULLPTR);
	~RegisterInfo();

private:
	Ui::RegisterInfo ui;
};
