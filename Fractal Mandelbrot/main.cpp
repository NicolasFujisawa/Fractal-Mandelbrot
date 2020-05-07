#include "FractalMandelbrot.h"
#include <QtWidgets/QApplication>
#include <iostream>
#include "BitmapFile.h"
#include "BitmapInfo.h"
#include "Bitmap.h"

using namespace std;
using namespace fractal;

int main(int argc, char *argv[])
{
	cout << "oi" << endl;
	Bitmap bm(100, 50);
	QApplication a(argc, argv);
	FractalMandelbrot w;
	w.show();
	return a.exec();
}
