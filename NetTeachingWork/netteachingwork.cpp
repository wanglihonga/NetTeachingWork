#include "netteachingwork.h"

NetTeachingWork::NetTeachingWork(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	initConfig();
	//sqlConfig();
}

//��ʼ���������
void NetTeachingWork::initConfig()
{
	connect(ui.pushButton_Login,SIGNAL(clicked()),this,SLOT(loginSystem())); //��¼ϵͳ�ж�
	connect(ui.pushButton_Register,SIGNAL(clicked()),this,SLOT(registerInfo())); // ע�Ṧ��
}

//���ݿ�����
void NetTeachingWork::sqlConfig()
{
	QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE", CONNECTSQLNAME);
	db.setDatabaseName(DATABASENAME);
	if (!db.open())
	{
		QMessageBox::information(NULL, QString::fromLocal8Bit("���ݿⴴ��"),QString::fromLocal8Bit("���ݿⴴ��ʧ��"));
		return;
	}
	QSqlQuery query(db);
	//�����û���Ϣ�� ������userinfo ��������username(�û���),password(�û�����),name(��ʵ����)��studyid(ѧ��)
	QString create_table_sql = "create table userinfo(username varchar primary key,password varchar,name varchar,studyid varchar,role varchar)"; 
	bool is_CreateTable = query.exec(create_table_sql);
	if (!is_CreateTable)
	{
		QMessageBox::information(NULL,QString::fromLocal8Bit("������"),QString::fromLocal8Bit("������ʧ��"));
		return;
	}
}

//��¼ϵͳ��֤
void NetTeachingWork::loginSystem()
{
	//���������û���������
	QString txt_username = ui.plainTextEdit_UserName->toPlainText(); 
	QString txt_password = ui.plainTextEdit_Password->toPlainText();
	QSqlDatabase db = QSqlDatabase::database(CONNECTSQLNAME);
	if (!db.open())
	{
		sqlConfig();
	}
	QSqlQuery query(db);
	//��������
	QString search_data_sql = "select * from userinfo";
	bool is_Search = query.exec(search_data_sql);
	if (!is_Search)
	{
		QMessageBox::warning(NULL,QString::fromLocal8Bit("���ݿ����"),QString::fromLocal8Bit("����ʧ��"));
		return;
	}
	//�ж����ݿ����Ƿ�����û�����
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
		//����ϵͳ������ ��¼��������or�ر�
		this->close();
	}
	else
	{
		QMessageBox::warning(NULL, QString::fromLocal8Bit("��¼ʧ��"),QString::fromLocal8Bit("�û������������,����������!"));
		ui.plainTextEdit_UserName->setPlainText("");
		ui.plainTextEdit_Password->setPlainText("");
	}
}

//ע���û�
void NetTeachingWork::registerInfo()
{
	RegisterInfo *registerForm = new RegisterInfo();
	registerForm->show();
//	this->close();
}