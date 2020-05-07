#pragma once
#include <iostream>

using namespace std;
class Point
{
private:
	/* pair first x, second y*/
	pair<int, int> point;
public:
	Point(int x, int y);

	Point(pair<int, int> p);

	pair<int, int> getPoint();
};

