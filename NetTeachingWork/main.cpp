#include "netteachingwork.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	NetTeachingWork w;
	w.show();
	return a.exec();
}
