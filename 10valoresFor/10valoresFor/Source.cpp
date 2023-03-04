#include<iostream>;
using namespace std;

int main() {
	int suma = 0, f, valor,promedio;
	for (f=1; f <= 10; f++) {
		cout << "Ingrese valor: ";
		cin >> valor;
		suma = suma + valor;
	}
	promedio = suma / 10;

	cout << "la suma es: ";
	cout << suma;
	cout << "\n";
	cout << "El promedio es: ";
	cout << promedio;
}
