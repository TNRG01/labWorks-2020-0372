#include <iostream>;
using namespace std;
int main() {
	double num1, num2, resultado; //double porque se pueden utilizar datos grandes
	char operador;
	bool fin; // booleano porque solo se necesita que sea verdadero o falso
	do
	{
		cout << "The first number: " << endl;
		cin >> num1;
		cout << "The second number: " << endl;
		cin >> num2;
		cout << "Operator: " << endl;
		cin >> operador;
		switch (operador)
		{
		case '+':
			resultado = num1 + num2;
			cout << resultado<<endl;
			break;
		case '-':
			resultado = num1 - num2;
			cout << resultado << endl;
			break;
		case '*':
		case 'x':
		case 'X':
			resultado = num1 * num2;
			cout << resultado << endl;
			break;
		case '/':
			if (num2==0)
			{
				cout << "You cannot divide by 0 ((" << endl;
			}
			else
			{
				resultado = num1 / num2;
				cout << resultado << endl;
			}
			break;
		default:
			cout << " I do not recognize the operation" << endl;
			break;
		}
		cout << "Do you want to use it again?" << endl << "1: Yes" << endl << "0: No" << endl;
		cin >> fin;
	} while (fin == true);
	cout << "Thanks for using me :)";
	return 0;
}
