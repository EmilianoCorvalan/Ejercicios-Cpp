#include<iostream>;
using namespace std;
/*
Se tiene la siguiente información:
ˇ Nombres de 4 empleados.
ˇ Ingresos en concepto de sueldo, cobrado por cada empleado, en los últimos 3 meses.
Confeccionar el programa para:

a) Realizar la carga de la información mencionada.
b) Generar un vector que contenga el ingreso acumulado en sueldos en los últimos 3 meses para cada empleado.
c) Mostrar por pantalla el total pagado en sueldos a todos los empleados en los últimos 3 meses
d) Obtener el nombre del empleado que tuvo el mayor ingreso acumulado*/

class SueldoEmpleados {
private:
	char empleados[4][40];
	int sueldos[4][3];
	int sueldostot[4];
public:
	void cargar();
	void calcularSumaSueldos();
	void imprimirTotalPagado();
	void empleadoMayorSueldo();
};

void SueldoEmpleados::cargar() {
	for (int f = 0; f < 4; f++) {
		cout << "Ingrese el nombre del empleado: ";
		cin.get(empleados[f], 40);
		for (int c = 0; c < 3; c++) {
			cout << "Ingrese sueldo: ";
			cin >> sueldos[f][c];
			cin.get();
		}
	}
}

void SueldoEmpleados::calcularSumaSueldos() {
	for (int f = 0; f < 4; f++) {
		int suma = 0;
		for (int c = 0; c < 3; c++) {
			suma = suma + sueldos[f][c];
		}
		sueldostot[f] = suma;
	}
}

void SueldoEmpleados::imprimirTotalPagado() {
	cout << "Total de sueldos pagados por empleado: " << endl;
	for (int f = 0; f < 4; f++) {
		cout << empleados[f] << " - " << sueldostot[f] << endl;
	}
}

void SueldoEmpleados::empleadoMayorSueldo() {
	int may = sueldostot[0];
	char nom[40];
	strcpy_s(nom, 40, empleados[0]);
	for (int f = 0; f < 4; f++) {
		if (sueldostot[f] > may) {
			may = sueldostot[f];
			strcpy_s(nom, 40, empleados[f]);
		}
	}
	cout << "El empleado con mayor sueldo es " << nom << " con un sueldo acumulado de " << may << endl;
}

int main() {
	SueldoEmpleados se;
	se.cargar();
	se.calcularSumaSueldos();
	se.imprimirTotalPagado();
	se.empleadoMayorSueldo();
}