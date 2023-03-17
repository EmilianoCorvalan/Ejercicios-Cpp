#include<iostream>;
using namespace std;

/*Confeccionar una clase que represente un empleado. Definir como atributos su nombre y su sueldo. En el constructor cargar los atributos y luego en otro método imprimir sus datos y por último uno que imprima un mensaje si debe pagar impuestos (si el sueldo supera a 3000)*/

class Empleado {
private:
	char nombre[40];
	int sueldo;
public:
	Empleado();
	void imprimir();
	void pagaImpuestos();
};

Empleado::Empleado() {
	cout << "Ingrese nombre de empleado: ";
	cin.getline(nombre, 40);
	cout << "Ingrese sueldo: ";
	cin >> sueldo;
}

void Empleado::imprimir() {
	cout << endl;
	cout << "Empleado: " << nombre << endl;
	cout << "Sueldo: " << sueldo << endl;
}

void Empleado::pagaImpuestos() {
	if (sueldo > 3000) {
		cout << "El empleado paga impuestos";
	}
	else {
		cout << "El empleado no paga impuestos";
	}
}

int main() {
	Empleado emp;
	emp.imprimir();
	emp.pagaImpuestos();
	return 0;
}