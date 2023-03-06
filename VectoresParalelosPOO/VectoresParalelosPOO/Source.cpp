#include<iostream>;
using namespace std;

/*Crear una clase que permita ingresar el nombre de 5 productos y sus respectivos precios. Definir dos vectores paralelos. Mostrar cuantos productos tienen un precio mayor al primer producto ingresado.
*/

class Productos {
private:
	char producto[5][40];
	float precio[5];
	int mayor = 0;
public:
	void cargar();
	void precioMayorAlPrimero();
};

void Productos::cargar() {
	for (int f = 0; f < 5; f++) {
		cout << "Ingrese nombre de producto para la ubicacion: ";
		cin.getline(producto[f], 40);
		cout << "Ingrese el precio: ";
		cin >> precio[f];
		cin.get();
	}
}

void Productos::precioMayorAlPrimero() {
	for (int f = 1; f < 5; f++) {
		if (precio[f] > precio[0]) {
			mayor++;
		}
	}
	cout << "Total de productos mayor al primero: " << mayor << endl;
}

int main() {
	Productos pr;
	pr.cargar();
	pr.precioMayorAlPrimero();
}