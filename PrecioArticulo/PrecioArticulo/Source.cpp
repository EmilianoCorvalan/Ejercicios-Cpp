#include<iostream>;

using namespace std;

int main() {
	float precioArticulo, cantidad, precioTotal;
	cout << "Ingrese precio del articulo: ";
	cin >> precioArticulo;
	cout << "\n";
	cout << "Ingrese la cantidad: ";
	cin >> cantidad;
	cout << "\n";
	precioTotal = precioArticulo * cantidad;
	cout << "Debe abonar: ";
	cout << precioTotal;
	cout << "\n";
}