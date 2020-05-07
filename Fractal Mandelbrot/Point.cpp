#include "Point.h"

Point::Point(int x, int y) {
	point = make_pair(x, y);
	cout << point.first << " " << point.second << endl;
}

Point::Point(pair<int, int> p) : point(p) {
}

pair<int, int> Point::getPoint() {
	return point;
}
