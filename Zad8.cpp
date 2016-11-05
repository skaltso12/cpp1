// Zad8.cpp
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	cout << n << " = ";
	if (n / 50 > 0) {
		cout << n / 50 << "*50";
		if (n % 50 > 0) cout << " + ";
		n %= 50;
	}
	if (n / 20 > 0) {
		cout << n / 20 << "*20";
		if (n % 20 > 0) cout << " + ";
		n %= 20;
	}
	if (n / 10 > 0) {
		cout << n / 10 << "*10";
		if (n % 10 > 0) cout << " + ";
		n %= 10;
	}
	if (n / 5 > 0) {
		cout << n / 5 << "*5";
		if (n % 5 > 0) cout << " + ";
		n %= 5;
	}
	if (n / 2 > 0) {
		cout << n / 2 << "*2";
		if (n % 2 > 0) cout << " + ";
		n %= 2;
	}
	if (n > 0) {
		cout << n << "*1";
	}
	cout << "\n";
	return 0;
}
