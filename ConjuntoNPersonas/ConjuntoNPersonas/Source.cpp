#include<iostream>;
using namespace std;

int main() {
	int personas, x = 1;
	float suma = 0;
	cout << "Ingresar cantidad de personas: ";
	cin >> personas;
	while (x <= personas) {
		float altura;
		cout << "Ingrese altura: ";
		cin >> altura;
		suma = suma + altura;
		x = x + 1;
	}
	float promedio = suma / personas;
	cout << "La altura promedio es: ";
	cout << promedio;
	cout << "\n";

	return main();

}


