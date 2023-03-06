//Realizar un programa que lea los lados de n triángulos, e informar :
//a) De cada uno de ellos, qué tipo de triángulo es : equilátero(tres lados iguales), isósceles(dos lados iguales), o escaleno(ningún lado igual)
//b) Cantidad de triángulos de cada tipo.
//c) Tipo de triángulo que posee menor cantidad.

#include <iostream>;
using namespace std;

int main() {
	float lado1, lado2, lado3;
	int f, cantidadTriangulos, equilatero=0,isosceles=0,escaleno=0;
	cout << "\n";
	cout << "Cuantos triangulos queres calcular? : ";
	cin >> cantidadTriangulos;
	for (f = 1; f <= cantidadTriangulos; f++) {
		cout << "\n";
		cout << "Ingrese lado 1: ";
		cin >> lado1;
		cout << "\n";
		cout << "Ingrese lado 2: ";
		cin >> lado2;
		cout << "\n";
		cout << "Ingrese lado 3: ";
		cin >> lado3;

		if (lado1 == lado2 or lado1 == lado3) {
			if (lado2 == lado3) {
				cout << "\n";
				cout << "Es un triangulo equilatero. (Tres lados iguales)";
				equilatero++;
			}
			else {
				cout << "\n";
				cout << "Es un triangulo isosceles. (Dos lados iguales)";
				isosceles++;
			}
		}
		else {
			cout << "\n";
			cout << "Es un triangulo escaleno. (Ningun lado igual)";
			escaleno++;
		}
		cout << "\n";
		cout << "Total equilateros: ";
		cout << equilatero;
		cout << "\n";
		cout << "Total isosceles: ";
		cout << isosceles;
		cout << "\n";
		cout << "Total escaleno: ";
		cout << escaleno;
		cout << "\n";
	}
	
}