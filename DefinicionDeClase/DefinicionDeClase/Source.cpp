#include<iostream>;
using namespace std;

class Persona {
private:
	char nombre[40];
	int edad;
public:
	void inicializar();
	void imprimir();
	void esMayorEdad();
};

void Persona::inicializar() {
	cout << "\n";
	cout << "Ingrese nombre: ";
	cin.getline(nombre, 40);
	cout << "Ingrese edad: ";
	cin >> (edad);
}
void Persona::imprimir() {
	cout << "Nombre: " << nombre;
	cout << "\n";
	cout << "Edad: " << edad;
}
void Persona::esMayorEdad() {
	if (edad > 18) {
		cout << "\n";
		cout << "Es mayor de edad.";
	}
	else {
		cout << "\n";
		cout << "No es mayor de edad.";
	}
}
int main() {
	Persona persona1;
	Persona persona2;
	persona1.inicializar();
	persona2.inicializar();
	persona1.imprimir();
	persona1.esMayorEdad();
	persona2.imprimir();
	persona2.esMayorEdad();
	return 0;
}