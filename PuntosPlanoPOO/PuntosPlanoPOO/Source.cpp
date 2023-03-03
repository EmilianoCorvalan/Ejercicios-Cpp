#include<iostream>
using namespace std;

class Punto {
private:
	int x, y;
public:
	void inicializar();
	void imprimirCuadrante();
};

void Punto::inicializar() {
	cout << "\n";
	cout << "Ingrese valor en eje X: ";
	cin >> x;
	cout << "\n";
	cout << "Ingrese valor en eje Y: ";
	cin >> y;
}

void Punto::imprimirCuadrante() {
	if (x > 0 and y > 0) {
		cout << "Pertenece al primer cuadrante.";
		cout << "\n";
	}
	else 
		if (x < 0 and y>0) {
		cout << "Pertenece al segundo cuadrante.";
		cout << "\n";
	}
}

int main() {
	Punto punto1;
	punto1.inicializar();
	punto1.imprimirCuadrante();

	Punto punto2;
	punto2.inicializar();
	punto2.imprimirCuadrante();

	return 0;

}