// Zad10.cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double a11, a12, b1, a21, a22, b2, det;
	cin >> a11 >> a12 >> b1;
	cin >> a21 >> a22 >> b2;
	det = a11 * a22 - a21 * a12;
	if (det != 0) {
		double det1, det2;
		det1 = a22 * b1 - a12 * b2;
		det2 = a11 * b2 - a21 * b1;
		cout << setw(5) << (det1 / det) << " " << setw(5) << (det2 / det);
	}
	else if (abs(a11) < 1.e-5) {
		if (abs(a12) < 1.e-5)
			if (abs(b1) < 1.e-5) cout << "Many solutions"; else cout << "No solution";
		else if (abs(a12 - a21) < 1.e-5 && abs(b1 - b2) < 1.e-5) cout << "Many solutions";
		else cout << "No solution";
	}
	else {
		if (abs(-a21 / a11 * a12 + a22) < 1.e-5 && abs(-a21 / a11 * b1 + b2) < 1.e-5) cout << "Many solutions";
		else cout << "No solution";
	}
	cout << "\n";
	return 0;
}
