#include<iostream>;
using namespace std;

int main() {
	int nro1, nro2, nro3;
	cout << "Ingrese nro 1: ";
	cin >> nro1;
	cout << "Ingrese nro 2: ";
	cin >> nro2;
	cout << "Ingrese nro 3: ";
	cin >> nro3;
	if (nro1 < 10 or nro2 < 10 or nro3 < 10) {
		cout << "Alguno de los numeros es menor a diez.";
	}
	else {
		cout << "Ningún numero es menor a 10.";
	}
	return main();

}
