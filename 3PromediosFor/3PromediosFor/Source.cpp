#include<iostream>;
using namespace std;
/*
Se cuenta con la siguiente información:
Las edades de 5 estudiantes del turno mañana.
Las edades de 6 estudiantes del turno tarde.
Las edades de 11 estudiantes del turno noche.
Las edades de cada estudiante deben ingresarse por teclado.
a) Obtener el promedio de las edades de cada turno (tres promedios)
b) Imprimir dichos promedios (promedio de cada turno)
c) Mostrar por pantalla un mensaje que indique cual de los tres turnos tiene un promedio de edades mayor. */
int main() {
	int f, edad, totalMañana = 0, totalTarde=0,totalNoche=0, promedioMañana, promedioTarde, promedioNoche;
	for (f = 1; f <= 5; f++) {
		cout << "Ingrese edad alumno turno mañana: ";
		cin >> edad;
		totalMañana = totalMañana + edad;
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
	promedioMañana = totalMañana / 5;
	promedioTarde = totalTarde / 6;
	promedioNoche = totalNoche / 11;

	cout << "Promedio edades turno mañana: ";
	cout << promedioMañana;
	cout << "\n";
	cout << "Promedio edades turno tarde: ";
	cout << promedioTarde;
	cout << "\n";
	cout << "Promedio edades turno noche: ";
	cout << promedioNoche;
	cout << "\n";

	if (promedioMañana > promedioTarde and promedioMañana > promedioNoche) {
		cout << "El turno mañana tiene mayor promedio de edades.";
		cout << "\n";
	}
	if (promedioTarde > promedioMañana and promedioTarde > promedioNoche) {
		cout << "El turno tarde tiene mayor promedio de edades: ";
		cout << "\n";
	}
	if (promedioNoche > promedioMañana and promedioNoche > promedioTarde) {
		cout << "El turno noche tiene mayor promedio de edades.";
		cout << "\n";
	}

}