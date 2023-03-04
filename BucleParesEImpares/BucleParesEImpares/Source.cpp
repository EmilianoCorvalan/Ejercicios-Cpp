#include<iostream>;
using namespace std;

int main() {
	int cantidadNumeros, cantidadPar = 0, cantidadImpar = 0, x = 1;
	cout << "Ingrese la cantidad de numeros que desea verificar: ";
	cin >> cantidadNumeros;
	while (x <= cantidadNumeros) {
		int valor;
		cout << "Ingrese un numero: ";
		cin >> valor;
		if (valor % 2 == 1) {
			cantidadImpar = cantidadImpar + 1;
		}
		else {
			cantidadPar = cantidadPar + 1;
		}
		x = x + 1;
	}
	cout << "Cantidad de pares: ";
	cout << cantidadPar;
	cout << "\n";
	cout << "Cantidad de impares: ";
	cout << cantidadImpar;
	cout << "\n";
	return main();
}