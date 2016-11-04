// Zad6.cpp
#include <iostream>
using namespace std;

int main()
{
	double x, y, a, b, u, v, c, d, h, w;
	cin >> x >> y >> a >> b;
	cin >> u >> v >> c >> d;
	double x1, x2, x3, x4, y1, y2, y3, y4;
	x1 = x;
	x2 = b + x;
	x3 = u;
	x4 = u + d;
	y1 = y;
	y2 = y + a;
	y3 = v;
	y4 = v + c;
	if (x2 <= x3 || x4 <= x1 || y2 <= y3 || y4 <= y1) {
		cout << "0\n";
		return 0;
	}
	if (x1 <= x3 && x4 <= x2) w = abs(x3 - x4);
	else if (x1 <= x3 && x2 < x4) w = abs(x2 - x3);
	else if (x3 < x1 && x4 <= x2) w = abs(x1 - x4);
	else w = abs(x1 - x2);
	if (y1 <= y3 && y4 <= y2) h = abs(y3 - y4);
	else if (y1 <= y3 && y2 < y4) h = abs(y2 - y3);
	else if (y3 < y1 && y4 <= y2) h = abs(y1 - y4);
	else h = abs(y1 - y2);
	cout << w * h << "\n";
	return 0;
}
