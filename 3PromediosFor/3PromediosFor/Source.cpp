#include<iostream>;
using namespace std;
/*
Se cuenta con la siguiente informaci�n:
Las edades de 5 estudiantes del turno ma�ana.
Las edades de 6 estudiantes del turno tarde.
Las edades de 11 estudiantes del turno noche.
Las edades de cada estudiante deben ingresarse por teclado.
a) Obtener el promedio de las edades de cada turno (tres promedios)
b) Imprimir dichos promedios (promedio de cada turno)
c) Mostrar por pantalla un mensaje que indique cual de los tres turnos tiene un promedio de edades mayor. */
int main() {
	int f, edad, totalMa�ana = 0, totalTarde=0,totalNoche=0, promedioMa�ana, promedioTarde, promedioNoche;
	for (f = 1; f <= 5; f++) {
		cout << "Ingrese edad alumno turno ma�ana: ";
		cin >> edad;
		totalMa�ana = totalMa�ana + edad;
	}
	for (f = 1; f <= 6; f++) {
		cout << "Ingrese edad alumno turno tarde: ";
		cin >> edad;
		totalTarde = totalTarde + edad;
	}
	for (f = 1; f <= 11; f++) {
		cout << "Ingrese edad alumno turno noche : ";
		cin >> edad;
		totalNoche = totalNoche + edad;
	}
	promedioMa�ana = totalMa�ana / 5;
	promedioTarde = totalTarde / 6;
	promedioNoche = totalNoche / 11;

	cout << "Promedio edades turno ma�ana: ";
	cout << promedioMa�ana;
	cout << "\n";
	cout << "Promedio edades turno tarde: ";
	cout << promedioTarde;
	cout << "\n";
	cout << "Promedio edades turno noche: ";
	cout << promedioNoche;
	cout << "\n";

	if (promedioMa�ana > promedioTarde and promedioMa�ana > promedioNoche) {
		cout << "El turno ma�ana tiene mayor promedio de edades.";
		cout << "\n";
	}
	if (promedioTarde > promedioMa�ana and promedioTarde > promedioNoche) {
		cout << "El turno tarde tiene mayor promedio de edades: ";
		cout << "\n";
	}
	if (promedioNoche > promedioMa�ana and promedioNoche > promedioTarde) {
		cout << "El turno noche tiene mayor promedio de edades.";
		cout << "\n";
	}

}