#include<iostream>;
using namespace std;
/*
Desarrollar un programa que permita ingresar un vector de 8 elementos, e informe:
El valor acumulado de todos los elementos del vector.
El valor acumulado de los elementos del vector que sean mayores a 36.
Cantidad de valores mayores a 50. */

class Vector8 {
private:
	int vec[8];
public:
	void cargar();
	void totalAcumulado();
	void totalMayorA36();
	void totalMayorA50();
};

void Vector8::cargar() {
	for (int f = 0; f <= 7; f++) {
		cout << "Ingrese un valor: ";
		cin >> vec[f];
	}
}
void Vector8::totalAcumulado(){
	int total = 0;
	for (int f = 0; f <= 7; f++) {
		total = total + vec[f];
	}
	cout << "El total acumulado es de: " << total;
	cout << "\n";
}
void Vector8::totalMayorA36(){
	int mayor36 = 0;
	for (int f = 0; f <= 7; f++) {
		if (vec[f] > 36) {
			mayor36++;
		}
	}
	cout << "Total de numeros mayores a 36: " << mayor36;
	cout << "\n";
}
void Vector8::totalMayorA50() {
	int mayor50 = 0;
	for (int f = 0; f <= 7; f++) {
		if (vec[f] > 50) {
			mayor50++;
		}
	}
	cout << "Total de numeros mayores a 50: " << mayor50;
	cout << "\n";
}

int main() {
	Vector8 vector;
	vector.cargar();
	vector.totalAcumulado();
	vector.totalMayorA36();
	vector.totalMayorA50();
	cin.get();
	cin.get();
}