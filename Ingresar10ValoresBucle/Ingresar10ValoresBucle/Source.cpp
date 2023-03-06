#include<iostream>;
using namespace std;

int main() {
	int x = 1;
	float suma = 0;
	while (x <= 10) {
		int valor;
		cout << "Ingrese un valor: ";
		cin >> valor;
		suma = suma + valor;
		x = x + 1;
	}

	float promedio = suma / 10;
	cout << "\n";
	cout << "La suma es: ";
	cout << suma;
	cout << "\n";
	cout << "El promedio es: ";
	cout << promedio;
}
