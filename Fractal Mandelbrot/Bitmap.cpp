#include "Bitmap.h"
#include "BitmapInfo.h"
#include "BitmapFile.h"
#include <iostream>
#include <fstream>

using namespace fractal;
using namespace std;

namespace fractal {
	Bitmap::Bitmap(int width, int height) : 
		m_width(width), m_height(height), m_pPixel(new uint8_t[width * height * 3]{})
	{
		cout << "w: " << width << "\nh: " << height << "\npPixel: " << m_pPixel << endl;
	}

	void Bitmap::setPixel(Point point, Color color)
	{
		uint8_t* pPixel = m_pPixel.get();

		pPixel += point.y * 3 * m_width + point.x * 3;

		pPixel[0] = color.blue;
		pPixel[1] = color.green;
		pPixel[2] = color.red;
	}

	bool Bitmap::write(string filename)
	{
		BitmapFile bitmapFile;
		BitmapInfo bitmapInfo;

		
		bitmapFile.fileSize = sizeof(BitmapFile) + sizeof(BitmapInfo) + m_width * m_height * 3;
		bitmapFile.dataOffset = sizeof(BitmapFile) + sizeof(BitmapInfo);
		
		bitmapInfo.width = m_width;
		bitmapInfo.height = m_height;

		fstream file;
		file.open(filename, ios::out | ios::binary);

		if (!file) {
			return false;
		}

		file.write((char*)&bitmapFile, sizeof(bitmapFile));
		file.write((char*)&bitmapInfo, sizeof(bitmapInfo));
		file.write((char*)m_pPixel.get(), m_width * m_height * 3);

		file.close();

		if (!file) {
			return false;
		}
		return true;
	}

	Bitmap::~Bitmap() 
	{
		std::clog << "Bitmap destroied" << std::endl;
	}
}