#pragma once
#ifndef BITMAPFILE_H_
#define BITMAPFILE_H_

#include <cstdint>
using namespace std;

#pragma pack(push, 2)

namespace fractal {
	struct BitmapFile {
		char header[2]{ 'B', 'M' };
		/* size of file */
		int32_t fileSize;
		/* reserved memory */
		int32_t reserved{ 0 };
		int32_t dataOffset;
	};
}

#pragma pack(pop)

#endif /* BITMAPFILE_H_ */