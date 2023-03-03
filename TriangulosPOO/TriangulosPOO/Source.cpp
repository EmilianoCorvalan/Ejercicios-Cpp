/*
* Desarrollar un programa que cargue los lados de un triángulo e implemente los siguientes métodos:
inicializar los atributos,
imprimir el valor del lado mayor
y otro método que muestre si es equilátero o no.
*/

#include <iostream>;

using namespace std;

class Triangulo {
private: 
	float lado1;
	float lado2;
	float lado3;
public: 
	void ingresarLados();
	void mostrarLadoMayor();
	void esEquilatero();
};

void Triangulo::ingresarLados() {
	cout << "Ingrese lado: ";
	cin >> lado1;
	cout << "Ingrese lado: ";
	cin >> lado2;
	cout << "Ingrese lado: ";
	cin >> lado3;
}

void Triangulo::mostrarLadoMayor() {
	if (lado1 > lado2 and lado1 > lado3) {
		cout << "El lado mayor es: " << lado1;
		cout << "\n";
	}
	else {
		if (lado2 > lado3) {
			cout << "El lado mayor es: " << lado2;
			cout << "\n";
		}
		else {
			cout << "El lado mayor es: " << lado3;
			cout << "\n";
		}
	}
}

void Triangulo::esEquilatero() {
	if (lado1 == lado2 and lado1 == lado3) {
		cout << "El triangulo es equilatero.";
		cout << "\n";
	}
	else {
		cout << "El triangulo no es equilatero.";
		cout << "\n";
	}
}

int main() {
	Triangulo firstTriangle;
	firstTriangle.ingresarLados();
	firstTriangle.mostrarLadoMayor();
	firstTriangle.esEquilatero();

	Triangulo secondTriangle;
	secondTriangle.ingresarLados();
	secondTriangle.mostrarLadoMayor();
	secondTriangle.esEquilatero();
}