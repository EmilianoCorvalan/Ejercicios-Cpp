#include<iostream>

using namespace std;

int main() {
	int valor, suma = 0, cant = 0;
	float promedio;
	do {
		cout << "\n";
		cout << "Ingrese un valor: ";
		cin >> valor;
		if (valor != 0) {
			suma = suma + valor;
			cant++;
		}
	}
	while (valor != 0);

	if (cant != 0) {
		promedio = suma / cant;
		cout << "El promedio es: ";
		cout << promedio;
	}
	else {
		cout << "No se ingresaron valores.";
	}
}