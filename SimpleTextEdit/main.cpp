#include "simpletextedit.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	SimpleTextEdit w;
	w.showMaximized();
	return a.exec();
}
