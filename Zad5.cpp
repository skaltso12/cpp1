// Zad5.cpp
#include <iostream>
using namespace std;

int main()
{
	double x, y, u, v;
	cin >> x >> y >> u >> v;
	x += u;
	y += v;
	if (x*x + y*y <= 1) cout << "60\n";
	else if (x*x + y*y <= 9) cout << "20\n";
	else if (x*x + y*y <= 64) cout << "10\n";
	else cout << "0\n";
	return 0;
}
