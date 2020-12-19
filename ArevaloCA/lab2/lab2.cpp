#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main() {

	srand(time(NULL));
	const int n = 7;
	int numeros[n];
    int i, pos, aux;
	double average, suma=0;
	for (i = 0; i < 7; i++) {
		numeros[i] = rand()%11;
		cout << numeros[i]<<" ";
	} 
	i = 0;
	while (i < 7) {
		pos = i;
		aux = numeros[i];

		while ((pos > 0) && (numeros[pos - 1] > aux)) {
			numeros[pos] = numeros[pos - 1];
			pos--;
		}
		numeros[pos] = aux;
		i++;
	}
	cout << "\nAfter changes: ";
	for (i = 0; i < 7; i++) {
		cout << numeros[i] << " ";
	}
	cout << "\n Impair numbers: ";
	for (i = 0; i < 7; i++) {
		if (numeros[i] % 2 != 0) {
			cout << numeros[i] << " ";
		}
	}
	cout << "\n Average: ";
	for (i=0; i<7; i++){
    suma+=numeros[i];
        average= suma/7;
    }
	cout.precision(4);
	cout << average;
	cout << " \n Minimum element: " << numeros[0];
	cout << "\n Maximum element: " << numeros[6] << endl;
	system("pause");
	return 0;
}
