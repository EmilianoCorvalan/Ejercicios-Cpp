#include<iostream>;
using namespace std;

int main() {
	int valor, suma = 0;
	do {
		cout << "\n";
		cout << "Ingrese un numero: ";
		cin >> valor;
		if (valor != 9999) {
			suma = suma + (valor);
		}
		
	} 
	while (valor != 9999);
	if (suma == 0) {
		cout << "\n";
		cout << "El valor acumulado es 0.";
	}
	else {
		if (suma >= 0) {
			cout << "\n";
			cout << "El valor acumulado es positivo.";
		}
		else {
			cout << "\n";
			cout << "El valor acumulado es negativo.";
		}
	}
	cout << "\n";
	cout << "Total: ";
	cout << suma;
}
