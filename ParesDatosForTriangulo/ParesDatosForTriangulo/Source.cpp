#include<iostream>;
using namespace std;

int main() {
	// n pares de datos
	// cada par es base y altura
	int cantidadParesDatos, f, base, altura, superficie, superficieMayorA12 = 0;
	cout << "Ingrese cantidad de pares de datos: ";
	cin >> cantidadParesDatos;
	for (f = 1; f <= cantidadParesDatos; f++) {
		cout << "\n";
		cout << "Ingrese base del triángulo: ";
		cin >> base;
		cout << "Ingrese altura del triangulo: ";
		cin >> altura;
		superficie = (base * altura) / 2;
		cout << "\n";
		cout << "La base es de: ";
		cout << base;
		cout << "\n";
		cout << "La altura es de: ";
		cout << altura;
		cout << "\n";
		cout << "La superficie es de: ";
		cout << superficie;
		cout << "\n";
		cout << "--------------";
		if (superficie > 12) {
			superficieMayorA12++;
		}
	}
	cout << "Total de triángulos con superficie mayor a 12: ";
	cout << superficieMayorA12;
}