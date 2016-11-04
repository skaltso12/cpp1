// Zad4.cpp Enter a chess piece and the coordinates of the piece and the king - output chessmate or not
#include <iostream>
using namespace std;

int main()
{
	char piece, Xp, Xk;
	int Yp, Yk;
	cin >> piece;
	cin >> Xp >> Yp;
	cin >> Xk >> Yk;
	switch (piece) {
	case 'R': if (Xp == Xk || Yp == Yk) cout << "Yes\n"; else 
		cout << "No\n"; break;
	case 'B': if (Xp + Yp == Xk + Yk || abs(Xp - Yp) == abs(Xk - Yk)) cout << "Yes\n"; else
		cout << "No\n"; break;
	case 'Q': if (Xp == Xk || Yp == Yk || Xp + Yp == Xk + Yk || abs(Xp - Yp) == abs(Xk - Yk)) cout << "Yes\n"; else 
		cout << "No\n"; break;
	case 'N': if (abs(Yk - Yp) == 2 && abs(Xk - Xp) == 1 || abs(Yk - Yp) == 1 && abs(Xk - Xp) == 2) cout << "Yes\n"; else 
		cout << "No\n";
	}
	return 0;
}
