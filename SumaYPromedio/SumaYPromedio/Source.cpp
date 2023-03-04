#include<iostream>

using namespace std;

int main() {
	float num1, num2, num3, num4, suma, promedio;
	cout << "Ingrese un numero: ";
	cin >> num1;
	cout << "\n";
	cout << "Ingrese un numero: ";
	cin >> num2;
	cout << "\n";
	cout << "Ingrese un numero: ";
	cin >> num3;
	cout << "\n";
	cout << "Ingrese un numero; ";
	cin >> num4;
	cout << "\n";
	suma = num1 + num2 + num3 + num4;
	promedio = suma / 4;
	cout << "El resultado de la suma total es: ";
	cout << suma;
	cout << "\n";
	cout << "\n";
	cout << "El promedio es: ";
	cout << promedio;
	cout << "\n";
}