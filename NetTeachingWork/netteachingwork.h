#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_netteachingwork.h"
#include "qsqldatabase.h"
#include "qmessagebox.h"
#include "qsqlquery.h"
#include "registerinfo.h"
#include "studentform.h"
#include "TeacherForm.h"

#define CONNECTSQLNAME "sql_UserInfo"
#define DATABASENAME   "userinfo.db"

class NetTeachingWork : public QMainWindow
{
	Q_OBJECT

public:
	NetTeachingWork(QWidget *parent = Q_NULLPTR);
	void initConfig();
	void sqlConfig();//数据库配置(QSqlite)

private:
	Ui::NetTeachingWorkClass ui;

private slots:
	void loginSystem(); //登录功能
	void registerInfo(); //注册功能
};
