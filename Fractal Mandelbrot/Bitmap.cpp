#include "Bitmap.h"
#include "BitmapInfo.h"
#include "BitmapFile.h"
#include <iostream>

using namespace fractal;

namespace fractal {
	Bitmap::Bitmap(int width, int height) : m_width(width), m_height(height), m_pPixel(new uint8_t[width*height*3]())
	{
		cout << "w: " << width << "\nh: " << height << "\npPixel: " << m_pPixel << endl;
	}

	void Bitmap::setPixel(Point point, Color color)
	{
	}

	bool Bitmap::write(string filename)
	{
		BitmapFile file;
		BitmapInfo info;

		
		file.fileSize = sizeof(BitmapFile) + sizeof(BitmapInfo) + (m_width * m_height * 3);
		file.dataOffset = sizeof(BitmapFile) + sizeof(BitmapInfo);
		
		info.width = m_width;
		info.height = m_height;


		return false;
	}

	Bitmap::~Bitmap() 
	{
		std::clog << "Bitmap destroied" << std::endl;
	}
}