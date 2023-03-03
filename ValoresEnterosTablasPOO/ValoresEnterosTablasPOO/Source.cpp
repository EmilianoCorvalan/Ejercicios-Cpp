#include<iostream>;
using namespace std;
/*
Confeccionar una clase que permita ingresar valores enteros mayores a cero por teclado y nos muestre la tabla de multiplicar de dicho valor. Finalizar el programa al ingresar el -1.
*/
class Tabla {
private:
	void calcular(int v);
public: 
	void cargarValor();
};

void Tabla::calcular(int v) {
	for (int f= v; f <= v * 10; f= f+ v) {
		cout << f;
		if (f < v * 10) {
			cout << "-";
		}
	}
	cout << "\n";
}

void Tabla::cargarValor() {
	int valor;
	do {
		cout << "Ingrese valor (-1 para finalizar): ";
		cin >> valor;
		if (valor != -1) {
			calcular(valor);
		}
	} while (valor != -1);
}

int main() {
	Tabla tabla1;
	tabla1.cargarValor();
}
