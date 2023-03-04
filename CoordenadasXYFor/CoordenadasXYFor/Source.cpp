//Escribir un programa que pida ingresar coordenadas(x, y) que representan puntos en el plano.
//Informar cuántos puntos se han ingresado en el primer, segundo, tercer y cuarto cuadrante.
//Al comenzar el programa se pide que se ingrese la cantidad de puntos a procesar.

#include <iostream>;
using namespace std;
int main() {
	int f, cantidadPuntos, primerCuadrante = 0, segundoCuadrante = 0, tercerCuadrante = 0, cuartoCuadrante = 0;
	float x, y;
	cout << "\n";
	cout << "Ingrese cantidad de puntos a representar: ";
	cin >> cantidadPuntos;
	for (f = 1; f <= cantidadPuntos; f++) {
		cout << "\n";
		cout << "Ingrese coordenada en X: ";
		cin >> x;
		cout << "\n";
		cout << "Ingrese coordenada en Y: ";
		cin >> y;
		if (x > 0 and y > 0) {
			primerCuadrante++;
			cout << "\n";
			cout << "Pertenece al primer cuadrante. ";
			cout << "\n";
		}
		if (x < 0 and y > 0) {
			segundoCuadrante++;
			cout << "\n";
			cout << "Pertenece al segundo cuadrante.";
			cout << "\n";
		}
		if (x < 0 and y < 0) {
			tercerCuadrante++;
			cout << "\n";
			cout << "Pertenece al tercer cuadrante.";
			cout << "\n";
		}
		if (x > 0 and y < 0) {
			cuartoCuadrante++;
			cout << "\n";
			cout << "Pertenece al cuarto cuadrante.";
			cout << "\n";
		}
		
	}
	cout << "Total primer cuadrante: ";
	cout << primerCuadrante;
	cout << "\n";
	cout << "Total segundo cuadrante: ";
	cout << segundoCuadrante;
	cout << "\n";
	cout << "Total tercer cuadrante: ";
	cout << tercerCuadrante;
	cout << "\n";
	cout << "Total cuarto cuadrante: ";
	cout << cuartoCuadrante;
	cout << "\n";
}