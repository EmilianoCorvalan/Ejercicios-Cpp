#include<iostream>;
using namespace std;
/*
Una empresa tiene dos turnos (mañana y tarde) en los que trabajan 8 empleados (4 por la mañana y 4 por la tarde)
Confeccionar un programa que permita almacenar los sueldos de los empleados agrupados por turno.
Imprimir los gastos en sueldos de cada turno.
*/

class Vector {
private:
	float turnoMan[4];
	float turnoTar[4];
public:
	void cargar();
	void calcularTotal();
};

void Vector::cargar() {
	for (int f = 0; f < 4; f++) {
		cout << "Ingrese sueldo turno manana: ";
		cin >> turnoMan[f];
	}
	for (int f = 0; f < 4; f++) {
		cout << "Ingrese sueldo turno tarde: ";
		cin >> turnoTar[f];
	}
}

void Vector::calcularTotal() {
	float tar=0,man=0;
	int suma = 0;
	for (int f = 0; f < 4; f++) {
		man = man + turnoMan[f];
		tar = tar + turnoTar[f];
		suma = suma + turnoMan[f] + turnoTar[f];
	}
	cout << "\n";
	cout << "Se gasta en turno ma;ana: " << man;
	cout << "\n";
	cout << "Se gasta en turno tarde: " << tar;
	cout << "\n";
	cout << "Se gasta en total: " << suma;
}

int main() {
	Vector vector;
	vector.cargar();
	vector.calcularTotal();
	cin.get();
	cin.get();
}