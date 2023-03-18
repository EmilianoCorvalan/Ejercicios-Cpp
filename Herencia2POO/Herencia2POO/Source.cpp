#include<iostream>;
using namespace std;

/*Confeccionar una clase Persona que tenga como atributos el nombre y la edad. Definir como responsabilidades un método que cargue los datos personales y otro que los imprima.
Plantear una segunda clase Empleado que herede de la clase Persona. Añadir un atributo sueldo y los métodos de cargar el sueldo e imprimir su sueldo.
Definir un objeto de la clase Persona y llamar a sus métodos. También crear un objeto de la clase Empleado y llamar a sus métodos.*/

class Persona {
protected:
	char nombre[40];
	int edad;
public:
	void cargarDatosPersonales();
	void imprimirDatosPersonales();
};

class Empleado: public Persona{
	float sueldo;
public:
	void cargarSueldo();
	void imprimirSueldo();
};

void Persona::cargarDatosPersonales() {
	cout << "Ingrese nombre de la persona: ";
	cin.getline(nombre, 40);
	cout << "Ingrese edad: ";
	cin >> edad;
	cin.get();
}

void Persona::imprimirDatosPersonales() {
	cout << "La persona es: " << nombre << " y tiene " << edad << " anios de edad." << endl;
}

void Empleado::cargarSueldo() {
	cout << "Ingrese sueldo del empleado: ";
	cin >> sueldo;
}
void Empleado::imprimirSueldo() {
	cout << "El sueldo de " << nombre << " es de: " << sueldo << endl;
}

int main() {
	Persona p1;
	p1.cargarDatosPersonales();
	p1.imprimirDatosPersonales();
	
	Empleado e1;
	e1.cargarDatosPersonales();
	e1.imprimirDatosPersonales();
	e1.cargarSueldo();
	e1.imprimirSueldo();
}