#include<iostream>;
using namespace std;

int main() {
	float dato1, dato2, dato3, cuenta;
	cout << "Ingrese dato 1: ";
	cin >> dato1;
	cout << "Ingrese dato 2: ";
	cin >> dato2;
	cout << "Ingrese dato 3: ";
	cin >> dato3;

	if (dato1 == dato2){
		if (dato1 == dato3) {
			cuenta = (dato1 + dato2) * dato3;
			cout << "El resultado es: ";
			cout << cuenta;
			cout << "\n";
		}
		else {
			cout << "Los datos no son iguales. No se realiza operacion aritmetica.";
			cout << "\n";
		}

	}
	else {
		cout << "Los datos no son iguales. No se realiza operacion aritmetica.";
		cout << "\n";
	}
	return main();
}