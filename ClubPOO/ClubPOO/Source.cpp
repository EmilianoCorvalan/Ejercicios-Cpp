/*Plantear una clase Club y otra clase Socio.
La clase Socio debe tener los siguientes atributos privados: nombre y la antigüedad en el club (en años). 

En el constructor pedir la carga del nombre y su antigüedad. La clase Club debe tener como atributos 3 objetos de la clase Socio.

Definir una responsabilidad para imprimir el nombre del socio con mayor antigüedad en el club.*/

#include<iostream>;
using namespace std;

class Socio {
	char nombre[40];
	int antiguedad;
public:
	Socio();
	void imprimir();
	int retornarAntiguedad();
};

class Club {
	Socio socio1, socio2, socio3;
public:
	void mayorAntiguedad();
};

Socio::Socio() {
	cout << "Ingrese nombre de socio: ";
	cin.getline(nombre, 40);
	cout << "Ingrese antiguedad: ";
	cin >> antiguedad;
	cin.get();
}

void Socio::imprimir() {
	cout << "Nombre: " << nombre << " - " << "Antiguedad: " << antiguedad << endl;
}

int Socio::retornarAntiguedad() {
	return antiguedad;
}

void Club::mayorAntiguedad() {
	cout << endl << "Socio con mas antiguedad: " << endl;
	if (socio1.retornarAntiguedad() > socio2.retornarAntiguedad()) {
		if (socio1.retornarAntiguedad() > socio3.retornarAntiguedad()) {
			socio1.imprimir();
		}
		else {
			if (socio2.retornarAntiguedad() > socio3.retornarAntiguedad()) {
				socio2.imprimir();
			}
			else {
				socio3.imprimir();
			}
		}
	}
}

int main() {
	Club club1;
	club1.mayorAntiguedad();
	return 0;
}