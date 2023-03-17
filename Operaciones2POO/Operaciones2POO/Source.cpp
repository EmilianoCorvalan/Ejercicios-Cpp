#include<iostream>

using namespace std;
/*
Implementar la clase Operaciones. Al constructor llegan dos enteros que deben utilizarse en los métodos para calcular su suma, resta, multiplicación y división. imprimir dichos resultados.*/

class Operaciones
{
public:
	Operaciones(int n1, int n2);
	void calcular();
	void imprimir();
private:
	int numero1;
	int numero2;
	int suma, mult, div, resta;
};

Operaciones::Operaciones(int n1, int n2)
{
	numero1 = n1;
	numero2 = n2;
}

void Operaciones::calcular()
{
	suma = numero1 + numero2;
	mult = numero1 * numero2;
	div = numero1 / numero2;
	resta = numero1 - numero2;
}

void Operaciones::imprimir() {
	cout << "Suma: " << suma << endl;
	cout << "Resta: " << resta << endl;
	cout << "Multiplicacion: " << mult << endl;
	cout << "Division: " << div << endl;
}

int main() {
	Operaciones op(10,5);
	op.calcular();
	op.imprimir();
}