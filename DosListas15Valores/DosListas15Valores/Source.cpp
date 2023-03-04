#include<iostream>;
using namespace std;

int main() {
	int x = 1;
	int y = 1;
	int lista1 = 0, lista2 = 0;
	while (x <= 3) {
		int valor1;
		cout << "\n";
		cout << "Ingrese un valor para lista 1: ";
		cin >> valor1;
		lista1 = lista1 + valor1;
		x = x + 1;
	}
	while (y <= 3) {
		int valor2;
		cout << "\n";
		cout << "Ingrese un valor para lista 2: ";
		cin >> valor2;
		lista2 = lista2 + valor2;
		y = y + 1;
	}

	if (lista1 > lista2) {
		cout << "Lista 1 es mayor.";
	}
	else{
		if (lista2 == lista1) {
			cout << "Las listas en total son iguales.";
		}
		else {
			cout << "Lista 2 es mayor.";
		}
		
		cout << "\n";
		cout << "lista 1: ";
		cout << lista1;
		cout << "\n";
		cout << "Lista 2: ";
		cout << lista2;
		cout << "\n";
		return main();
}
}
