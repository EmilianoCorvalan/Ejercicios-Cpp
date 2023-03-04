#include<iostream>;
using namespace std;
/*
Se realiza la carga de 10 valores enteros por teclado. Se desea conocer:
a) La cantidad de valores ingresados negativos.
b) La cantidad de valores ingresados positivos.
c) La cantidad de múltiplos de 15.
d) El valor acumulado de los números ingresados que son pares.
*/

int main() {
	int f, valor, negativos = 0, positivos = 0, mult15 = 0, pares = 0;
	for (f = 1; f <= 10; f++) {
		cout << "Ingrese un numero entero: ";
		cout << "\n";
		cin >> valor;
		if (valor >= 0) {
			positivos++;
		}
		else {
			negativos++;
		}
		if (valor % 15 == 0) {
			mult15++;
		}
		if (valor % 2 == 0) {
			pares++;
		}
	}
	cout << "Negativos: ";
	cout << negativos;
	cout << "\n";
	cout << "Positivos: ";
	cout << positivos;
	cout << "\n";
	cout << "Multiplos de 15: ";
	cout << mult15;
	cout << "\n";
	cout << "Pares: ";
	cout << pares;
	cout << "\n";
}