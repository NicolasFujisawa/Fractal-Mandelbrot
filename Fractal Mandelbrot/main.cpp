#include <iostream>
#include <cstdint>
#include <ppl.h>
#include "Bitmap.h"
#include "Color.h"
#include "Point.h"
#include "Mandelbrot.h"


using namespace std;
using namespace fractal;

int main()
{
	int const WIDTH = 1920;
	int const HEIGHT = 1080;

	Bitmap bitmap(WIDTH, HEIGHT);

	Point point(WIDTH, HEIGHT);
	Color color(255, 0, 0);
	double min = 999999;
	double max = -999999;

	concurrency::parallel_for(int(0), HEIGHT, [&](int y) {
			for (int x = 0; x < WIDTH; x++) {
				double xFractal = (x - WIDTH / 2 - 200) * 2.0 / HEIGHT;
				double yFractal = (y - HEIGHT / 2) * 2.0 / HEIGHT;
				
				int iterations = Mandelbrot::getIterations(xFractal, yFractal);
				
				uint8_t scale = (uint8_t)(256 * (double)iterations / Mandelbrot::MAX_ITERATIONS);

				scale = scale * scale;

				bitmap.setPixel(Point(x, y), Color(2, scale, 3));
				if (scale < min) min = scale;
				if (scale > max) max = scale;
			}
		});

	std::cout << min << " " << max << endl;

	bitmap.write("test.bmp");
	std::cout << "oi" << endl;

	return 0;
}
