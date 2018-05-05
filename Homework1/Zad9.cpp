// Zad9.cpp
#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	char op;
	cin >> a >> op >> b;
	if (b == 0 && (op == '/' || op == '%')) {
		cout << "Division by zero!\n";
		return 0;
	}
	a %= 16;
	b %= 16;
	if (a < 0) a += 16;
	if (b < 0) b += 16;
	switch (op) {
	case '+': c = a + b; break;
	case '-': c = a - b; break;
	case '.': c = a * b; break;
	case '/': c = a / b; break;
	case '%': c = a % b;
	}
	c %= 16;
	if (c < 0) c += 16;
	cout << c << "\n";
	return 0;
}
