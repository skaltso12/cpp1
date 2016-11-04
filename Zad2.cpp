// Zad2.cpp - Is EGN valid/ output date of birth and gender

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	long long egn;
	cin >> egn;
	if (egn < 1010000 || egn > 10000000000) {
		cout << "Bad input data!\n";
		return 0;
	}
	int yy, mm, dd;
	yy = egn / 100000000;
	mm = egn / 1000000 % 100;
	dd = egn / 10000 % 100;
	if (mm > 52 || mm % 20 > 12) {
		cout << "Bad input data!\n";
		return 0;
	}
	switch (mm % 20) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12: if (dd > 31) {
		cout << "Bad input data!\n";
		return 0;
	} break;
	case 4:
	case 6:
	case 9:
	case 11: if (dd > 30) {
		cout << "Bad input data!\n";
		return 0;
	} break;
	case 2: if (yy % 4 != 0 || mm > 12 && yy == 0) { if (dd > 28) {
		cout << "Bad input data!\n";
		return 0;
	} }
			else
				if (dd > 29) {
					cout << "Bad input data!\n";
					return 0;
				}
			break;
	}
	cout << setw(2) << setfill('0') << dd << "." 
		<< setw(2) << setfill('0') << (mm % 20) << ".";
	if (mm < 13)
		cout << "19" << setw(2) << setfill('0') << yy;
	else if (mm < 33)
		cout << "18" << setw(2) << setfill('0') << yy;
	else
		cout << "20" << setw(2) << setfill('0') << yy;
	if (egn / 10 % 2 == 0)
		cout << " M\n";
	else
		cout << " F\n";
	return 0;
}
