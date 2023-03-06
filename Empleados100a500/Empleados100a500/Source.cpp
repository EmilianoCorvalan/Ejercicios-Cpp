#include<iostream>;
using namespace std;

int main() {
	int cantidadEmpleados, x = 1, entre100a300 = 0, masde300 = 0, totalSueldosEmpresa= 0;
	cout << "\n";
	cout << "Ingrese cantidad de empleados: ";
	cin >> cantidadEmpleados;
	while (x <= cantidadEmpleados) {
		float sueldo;
		cout << "\n";
		cout << "Ingrese sueldo: ";
		cin >> sueldo;
		if (sueldo >= 100 and sueldo <= 300) {
			entre100a300 = entre100a300 + 1;
		}
		else {
			if (sueldo > 300) {
				masde300 = masde300 + 1;
			}
		}
		totalSueldosEmpresa = totalSueldosEmpresa + sueldo;
		x = x+1;
	}

	cout << "Empleados que cobran entre 100 y 300: ";
	cout << entre100a300;
	cout << "\n";
	cout << "Empleados que cobran mas de 300: ";
	cout << masde300;
	cout << "\n";
	cout << "Total de gasto empresarial en Sueldos: ";
	cout << totalSueldosEmpresa;

	return main();
}


