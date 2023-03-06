#include<iostream>;
using namespace std;

int main() {
	int valor;
	cout << "Ingrese un numero: ";
	cin >> valor;
	if (valor > 0) {
		cout << "El numero es positivo.";
	}
	else {
		if (valor == 0) {
			cout << "el numero es nulo.";
		}
		else {
			cout << "El numero es negativo";
		}
	}
}