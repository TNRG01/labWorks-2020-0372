#include <iostream>
#include <conio.h>
using namespace std;

double raiz(double x);
bool primo(int x);
int main() {
	cout << "Which opertation do you want?" << endl;
	cout << "1. Raised to nth power\n2. The factorial of: \n3. The square of: \n4. Is a prime number?\n" << endl;
	int n, typ, pot, i, res=1, Primo;
	cin >> typ;
	i = 1;
	cout << "Number: "; cin >> n;
		switch (typ) {
		case 1:
			cout <<"Raised to: "; cin >> pot;
			while (pot >= i) {
				res *= n;
				i++;
			}
			cout << res;
			break;
		case 2:
			for (i = 1; n >= i; i++) {
				res *= i;
			}
			cout << res;
			break;
		case 3:
			cout << raiz(n) << endl;

			break;
		case 4:
			Primo = primo(n);
			if (Primo == 0)
			{
				cout << "Is not a prime number";
			}
			else {
				cout << "Is a prime number";
			}
			break;
		};
		cout << "\n";
	_getch();
	return 0;
}
double raiz(double x) {
	double r = x, t = 0;
	while (t != r) {
		t = r;
		r = (x / r + r) / 2;
	}
	return r;
}
bool primo(int x)
{
	int i;
	bool r = 1;
	for (i = 2; i < (x / 2); i++) {
		if (x % i == 0) { r = 0; }
	}
	return r;
}
