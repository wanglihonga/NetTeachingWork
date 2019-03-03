#include "netteachingwork.h"

NetTeachingWork::NetTeachingWork(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	initConfig();
	//sqlConfig();
}

//初始化相关配置
void NetTeachingWork::initConfig()
{
	connect(ui.pushButton_Login,SIGNAL(clicked()),this,SLOT(loginSystem())); //登录系统判断
	connect(ui.pushButton_Register,SIGNAL(clicked()),this,SLOT(registerInfo())); // 注册功能
}

//数据库配置
void NetTeachingWork::sqlConfig()
{
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE", CONNECTSQLNAME);
	db.setDatabaseName(DATABASENAME);
	if (!db.open())
	{
		QMessageBox::information(NULL, QString::fromLocal8Bit("数据库创建"),QString::fromLocal8Bit("数据库创建失败"));
		return;
	}
	QSqlQuery query(db);
	//创建用户信息表 表名：userinfo 属性名：username(用户名),password(用户密码),name(真实姓名)，studyid(学号)
	QString create_table_sql = "create table userinfo(username varchar primary key,password varchar,name varchar,studyid varchar,role varchar)"; 
	bool is_CreateTable = query.exec(create_table_sql);
	if (!is_CreateTable)
	{
		QMessageBox::information(NULL,QString::fromLocal8Bit("创建表单"),QString::fromLocal8Bit("创建表单失败"));
		return;
	}
}

//登录系统认证
void NetTeachingWork::loginSystem()
{
	//获得输入的用户名和密码
	QString txt_username = ui.plainTextEdit_UserName->toPlainText(); 
	QString txt_password = ui.plainTextEdit_Password->toPlainText();
	QSqlDatabase db = QSqlDatabase::database(CONNECTSQLNAME);
	if (!db.open())
	{
		sqlConfig();
	}
	QSqlQuery query(db);
	//查找数据
	QString search_data_sql = "select * from userinfo";
	bool is_Search = query.exec(search_data_sql);
	if (!is_Search)
	{
		QMessageBox::warning(NULL,QString::fromLocal8Bit("数据库操作"),QString::fromLocal8Bit("操作失败"));
		return;
	}
	//判断数据库中是否存在用户数据
	int is_UserData_Flag = 0; 
	while (query.next())
	{
		QString username = query.value(0).toString();
		QString password = query.value(1).toString();
		if (username == txt_username && password == txt_password)
		{
			is_UserData_Flag = 1;
			break;
		}
	}
	if (is_UserData_Flag == 1)
	{
		StudentForm *studentForm = new StudentForm();
		studentForm->show();
		//进入系统主界面 登录界面隐藏or关闭
		this->close();
	}
	else
	{
		QMessageBox::warning(NULL, QString::fromLocal8Bit("登录失败"),QString::fromLocal8Bit("用户名或密码错误,请重新输入!"));
		ui.plainTextEdit_UserName->setPlainText("");
		ui.plainTextEdit_Password->setPlainText("");
	}
}

//注册用户
void NetTeachingWork::registerInfo()
{
	RegisterInfo *registerForm = new RegisterInfo();
	registerForm->show();
//	this->close();
}