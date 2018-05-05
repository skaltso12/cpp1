// Zad5.cpp
#include <iostream>
using namespace std;

int main()
{
	double x, y, u, v;
	cin >> x >> y;
	cin >> u >> v;
	x += u;
	y += v;
	if (abs(x*x + y*y - 1) < 1.e-3 || abs(x*x + y*y - 9) < 1.e-3 || abs(x*x + y*y - 64) < 1.e-3) {
		cout << "0\n";
		return 0;
	}
	if (x*x + y*y < 1) cout << "60";
	else if (x*x + y*y < 9) cout << "20";
	else if (x*x + y*y < 64) cout << "10";
	else cout << "0";
	cout << "\n";
	return 0;
}
