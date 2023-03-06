#include<iostream>
using namespace std;

int main() {
	float num1, num2, suma, diferencia, producto, division;
	cout << "Ingrese primer numero: ";
	cin >> num1;
	cout << "\n";
	cout << "Ingrese segundo numero: ";
	cin >> num2;
	cout << "\n";
	if (num1 > num2) {
		suma = num1 + num2;
		diferencia = num1 - num2;
		cout << "La suma es: ";
		cout << suma;
		cout << "\n";
		cout << "La diferencia es: ";
		cout << diferencia;
		cout << "\n";
	}
	else {
		producto = num1 * num2;
		division = num1 / num2;
		cout << "El producto es: ";
		cout << producto;
		cout << "\n";
		cout << "La division es: ";
		cout << division;
		cout << "\n";
	}

	cout << "///////////////////////////";
}
