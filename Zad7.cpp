// Zad7.cpp
#include <iostream>
using namespace std;

int main()
{
	double x, y, con1, con2;
	cin >> x >> y;
	con1 = x * x + pow(y - 3, 2);
	con2 = x * x + pow(y + 3, 2);
	if (x * x + y * y >= 36 || con1 == 1 || con1 == 9 && x >= 0 
		|| con2 == 1 || con2 == 9 && x <= 0) {
		cout << "Neutral\n";
		return 0;
	}
	if (con1 < 1) cout << "Evil\n";
	else if (con1 < 9) cout << "Good\n";
	else if (con2 < 1) cout << "Good\n";
	else if (con2 < 9) cout << "Evil\n";
	else if (x < 0)  cout << "Good\n";
	else cout << "Evil\n";
	return 0;
}
