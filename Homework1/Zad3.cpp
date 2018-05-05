// Zad3.cpp - Does the hexademical representation of an input decimal number contain only one type of digit
#include <iostream>
using namespace std;

int main()
{
	unsigned int n;
	cin >> n;
	if (n < 17 && n != 16) {
		cout << "Yes\n";
		return 0;
	}
	else if (n < 273 && n != 272 && n % 17 == 0) {
		cout << "Yes\n";
		return 0;
	}
	else if (n < 4369 && n != 4368 && n % 273 == 0) {
		cout << "Yes\n";
		return 0;
	}
	else if (n < 69905 && n != 69904 && n % 4369 == 0) {
		cout << "Yes\n";
		return 0;
	}
	else if (n < 1118481 && n != 1118480 && n % 69905 == 0) {
		cout << "Yes\n";
		return 0;
	}
	else if (n < 17895697 && n != 17895696 && n % 1118481 == 0) {
		cout << "Yes\n";
		return 0;
	}
	else if (n < 286331153 && n != 286331152 && n % 17895697 == 0) {
		cout << "Yes\n";
		return 0;
	}
	else if (n % 286331153 == 0) {
		cout << "Yes\n";
		return 0;
	}
	else
		cout << "No\n";
	return 0;
}
