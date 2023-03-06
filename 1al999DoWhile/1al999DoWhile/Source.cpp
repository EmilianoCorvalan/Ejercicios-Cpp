#include<iostream>

using namespace std;

int main() {
	int valor;
	do {
		cout << "\n";
		cout << "Ingrese valor: ";
		cin >> valor;
		if (valor >= 100) {
			cout << "Tiene 3 digitos.";
		}
		else {
			if (valor >= 10){
				cout << "Tiene 2 digitos.";
			}
			else {
				cout << "Tiene 1 digito.";
			}
		}
	} while (valor != 0);
}