#pragma once
#include <string>
#include <cstdint>
#include "Point.h"
#include "Color.h"

using namespace std;

namespace fractal {
	class Bitmap
	{
	private:
		int m_width{ 0 };
		int m_height{ 0 };
		unique_ptr<uint8_t[]> m_pPixel{ nullptr };
	public:
		Bitmap(int width, int height);
		void setPixel(Point point, Color color);
		bool write(string filename);
		virtual ~Bitmap();
	};
}

