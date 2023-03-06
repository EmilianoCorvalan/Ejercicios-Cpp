//Desarrollar un programa que solicite la carga de 10 números e imprima la suma de los últimos 5 valores ingresados.
#include<iostream>;
using namespace std;

int main() {
	int valor, f, suma=0;
	for (f = 1; f <= 10; f++) {
		cout << "\n";
		cout << "Ingrese un numero: ";
		cin >> valor;
		if (f >= 6) {
			suma = suma + valor;
			cout << "suma: ";
			cout << suma;
		}
	}
	cout << "\n";
	cout << "La suma de los ultimos 5 numeros es: ";
	cout << suma;
	return main();
}