#include<iostream>;
using namespace std;

int main() {
	int numero;
	cout << "ingrese numero: ";
	cin >> numero;
	if (numero > 9) {
		cout << "El numero tiene dos digitos";
		cout << "\n";
	}
	else {
		cout << "El numero tiene un digito";
		cout << "\n";
	}
}