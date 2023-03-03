#include<iostream>

using namespace std;

class PruebaVector2 {
private:
	float alturas[5];
	float promedio;
public:
	void cargar();
	void calcularPromedio();
	void mayoresMenores();
};

void PruebaVector2::cargar() {
	for (int f = 0; f < 5; f++) {
		cout << "Ingrese la altura de la persona: ";
		cin >> alturas[f];
	}
}

void PruebaVector2::calcularPromedio() {
	float suma = 0;
	for (int f = 0; f < 5; f++) {
		suma = suma + alturas[f];
	}
	promedio = suma / 5;
	cout << "El promedio de alturas es de: " << promedio << "\n";
}

void PruebaVector2::mayoresMenores() {
	int mayor=0, menor=0;
	for (int f = 0; f < 5; f++) {
		if (alturas[f] > promedio) {
			mayor++;
		}
		else {
			if (alturas[f] < promedio) {
				menor++;
			}
		}
	}
	cout << "Mayores al promedio: " << mayor << "\n";
	cout << "Menores al promedio: " << menor << "\n";
	cin.get();
	cin.get();
}

int main() {
	PruebaVector2 vector2;
	vector2.cargar();
	vector2.calcularPromedio();
	vector2.mayoresMenores();
}