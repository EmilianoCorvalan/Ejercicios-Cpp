#include <iostream>

using namespace std;

int main() {
	float num1, num2, num3, num4, suma, producto;
	cout << "Ingrese el primer numero: ";
	cin >> num1;
	cout << "\n";
	cout << "Ingrese el segundo numero: ";
	cin >> num2;
	cout << "\n";
	cout << "Ingrese el tercer numero: ";
	cin >> num3;
	cout << "\n";
	cout << "Ingrese el cuarto numero: ";
	cin >> num4;
	cout << "\n";
	suma = num1 + num2;
	producto = num3 * num4;
	cout << "La suma de los primeros dos numeros es: ";
	cout << suma;
	cout << "\n";
	cout << "El producto del tercer y cuarto numero es: ";
	cout << producto;
	cout << "\n";
	return 0;
}