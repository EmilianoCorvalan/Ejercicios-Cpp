#include<iostream>
using namespace std;
/*
Confeccionar una clase que represente un empleado. Definir como atributos su nombre y su sueldo. Confeccionar los métodos para la carga, otro para imprimir sus datos y por último uno que imprima un mensaje si debe pagar impuestos (si el sueldo supera a 3000)
*/

class Empleado {
private:
	char nombre[40];
	float sueldo;
public:
	void inicializar();
	void imprimirDatos();
	void debePagarImpuestos();
};

void Empleado::inicializar() {
	cout << "\n";
	cout << "Ingrese nombre: ";
	cout << "\n";
	cin.getline(nombre,40);
	cout << "Ingrese sueldo: ";
	cout << "\n";
	cin >> sueldo;
}

void Empleado::imprimirDatos() {
	cout << "Empleado: " << nombre;
	cout << "\n";
	cout << "Sueldo: " << sueldo;
	cout << "\n";
}

void Empleado::debePagarImpuestos() {
	if (sueldo > 3000) {
		cout << "\n";
		cout << "El empleado debe pagar impuestos.";
	}
	else {
		cout << "\n";
		cout << "El empleado no debe pagar impuestos.";
	}
}

int main() {
	Empleado empleado1;
	empleado1.inicializar();
	empleado1.imprimirDatos();
	empleado1.debePagarImpuestos();
}