#include<iostream>;
using namespace std;

int main() {
	int preguntasRealizadas, preguntasCorrectas;
	float porcentaje;
	cout << "Ingrese la cantidad de preguntas realizadas: ";
	cin >> preguntasRealizadas;
	cout << "\n";
	cout << "Ingrese la cantidad de respuestas correctas: ";
	cin >> preguntasCorrectas;
	cout << "\n";

	porcentaje = (preguntasCorrectas * 100) / preguntasRealizadas;

	if (porcentaje >= 90) {
		cout << "Nivel maximo - Mayor a 90% - Exactamente: ";
		cout << porcentaje;
		cout << "%";
		cout << "\n";
	}
	else {
		if (porcentaje >= 75 and porcentaje < 90) {
			cout << "Nivel medio - Entre 75% y 90% - Exactamente: ";
			cout << porcentaje;
			cout << "%";
			cout << "\n";
		}
		else {
			if (porcentaje >= 50 and porcentaje < 75) {
				cout << "Nivel regular - Entre 50% y 75% - Exactamente: ";
				cout << porcentaje;
				cout << "%";
				cout << "\n";
			}
			else {
				cout << "Fuera de nivel - Menor a 50% - Exactamente: ";
				cout << porcentaje;
				cout << "%";
				cout << "\n";
			}
		}
	}
	return main();
}