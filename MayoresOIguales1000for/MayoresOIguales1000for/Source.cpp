#include<iostream>;
using namespace std;

int main() {
	int cantidadNumeros, mayoresDe1000 = 0, f;
	cout << "Ingrese cantidad de numeros: ";
	cin >> cantidadNumeros;
	for (f = 1; f <= cantidadNumeros; f++) {
		int valor;
		cout << "Ingrese un numero: ";
		cin >> valor;
		if (valor >= 1000) {
			mayoresDe1000++;
		}
	}
	cout << "Numeros mayores a 1000: ";
	cout << mayoresDe1000;
	cout << "\n";
	return main();
}