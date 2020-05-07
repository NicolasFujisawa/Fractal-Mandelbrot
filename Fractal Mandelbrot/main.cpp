#include "FractalMandelbrot.h"
#include <QtWidgets/QApplication>
#include <iostream>
#include "BitmapFile.h"
#include "BitmapInfo.h"

using namespace std;

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	FractalMandelbrot w;
	w.show();
	return a.exec();
}
