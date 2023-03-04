#include<iostream>;
using namespace std;

int main() {
	float nro1, nro2, nro3;
	cout << "Ingrese nro1: ";
	cin >> nro1;
	cout << "Ingrese nro2: ";
	cin >> nro2;
	cout << "Ingrese nro3: ";
	cin >> nro3;
	if (nro1 < 10 && nro2 < 10 && nro3 < 10) {
			cout << "Los numeros son menores a 10.";
		}
	else {
		cout << "los numeros no son menores a 10.";
		cout << "\n";
	}
	return main();
}