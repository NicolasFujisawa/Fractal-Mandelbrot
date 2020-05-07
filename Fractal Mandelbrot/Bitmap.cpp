#include "Bitmap.h"
#include <iostream>

namespace fractal {
	Bitmap::Bitmap(int width, int height) : m_width(width), m_height(height), m_pPixel(new uint8_t[width*height*3])
	{

	}

	void Bitmap::setPixel(Point point, Color color)
	{
	}

	bool Bitmap::write(string filename)
	{
		return false;
	}

	Bitmap::~Bitmap() 
	{
		std::clog << "Bitmap destroied" << std::endl;
	}
}