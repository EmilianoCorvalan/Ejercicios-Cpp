#include<iostream>;
using namespace std;

int main() {
	int numero;
	cout << "Ingrese un numero: ";
	cin >> numero;
	if (numero > 999) {
		cout << "Error. El numero debe tener hasta 3 cifras";
		cout << "\n";
	}
	else {
		if(numero < 10){
			cout << "El numero tiene 1 digito.";
			cout << "\n";
		}
		else {
			if (numero >= 10 and numero <= 99) {
				cout << "El numero tiene 2 digitos";
				cout << "\n";
			}
			else {
				cout << "El numero tiene 3 digitos."; cout << "\n";
			}
		}
	}
	return main();
}