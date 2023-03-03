#include<iostream>

using namespace std;

class Cuadrado {
private:
	int lado;
public:
	void inicializar();
	void imprimirPerimetro();
	void imprimirSuperficie();
};

void Cuadrado::inicializar() {
	cout << "Ingrese el valor del lado: ";
	cin >> lado;
}

void Cuadrado::imprimirPerimetro() {
	cout << "El perimetro es: ";
	cout << lado * 4;
}

void Cuadrado::imprimirSuperficie() {
	cout << "La superficie es: ";
	cout << lado * lado;
}

int main() {
	Cuadrado cuadrado1;
	cuadrado1.inicializar();
	cout << "\n";
	cuadrado1.imprimirPerimetro();
	cout << "\n";
	cuadrado1.imprimirSuperficie();
	cout << "\n";

	Cuadrado cuadrado2;
	cuadrado2.inicializar();
	cout << "\n";
	cuadrado2.imprimirPerimetro();
	cout << "\n";
	cuadrado2.imprimirSuperficie();
	cout << "\n";
}