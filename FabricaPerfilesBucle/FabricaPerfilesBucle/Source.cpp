#include<iostream>;
using namespace std;

int main() {
	int x = 1;
	int cantidad = 0, cantidadPiezasAProcesar;
	cout << "Ingrese piezas a procesar: ";
	cin >> cantidadPiezasAProcesar;
	while (x <= cantidadPiezasAProcesar) {
		float largo;
		cout << "Ingrese largo: ";
		cin >> largo;
		if (largo >= 1.2f and largo <= 1.3f) {
			cantidad = cantidad + 1;
		}
		x = x + 1;
	}
	cout << "La cantidad de piezas aptas son: ";
	cout << cantidad;
}