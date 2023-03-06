#include<iostream>;
using namespace std;

int main() {
	float nota1, nota2, nota3, promedio;
	cout << "Ingrese nota: ";
	cin >> nota1;
	cout << "\n";
	cout << "Ingrese nota: ";
	cin >> nota2;
	cout << "\n";
	cout << "Ingrese nota: ";
	cin >> nota3;
	cout << "\n";
	promedio = (nota1 + nota2 + nota3) / 3;
	if (promedio >= 7) {
		cout << "Promocionado con: ";
		cout << promedio;
	}
	else {
		cout << "No promocionado con: ";
		cout << promedio;
	}
}