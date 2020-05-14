#include <iostream>
#include "Bitmap.h"
#include "Color.h"
#include "Point.h"

using namespace std;
using namespace fractal;

int main(int argc, char *argv[])
{
	int const WIDTH = 2400;
	int const HEIGHT = 2400;

	Bitmap bitmap(WIDTH, HEIGHT);
	
	Point point(WIDTH, HEIGHT);
	Color color(255, 0, 0);
	
	double min = 999999;
	double max = -999999;

	for (int i = 0; i < HEIGHT; i++) {
		for (int j = 0; j < WIDTH; j++) {
			
			point.x = j;
			point.y = i;
			
			bitmap.setPixel(point, color);
			
		}
	}

	bitmap.setPixel(point, color);
	bitmap.write("test.bmp");
	cout << "oi" << endl;
	
	return 0;
}
