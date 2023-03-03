#include<iostream>
using namespace std;

/*
Desarrollar una clase con dos métodos, uno para la carga de dos enteros. Definir un método privado que le enviemos los valores ingresados por teclado y nos retorne el mayor de ellos.
*/

class NumeroMayor {
private:
	int mayor(int n1,int n2);
public:
	void cargarNumeros();
};

int NumeroMayor::mayor(int n1, int n2) {
	int m;
	if (n1 > n2) {
		m = n1;
	}
	else {
		m = n2;
	}
	return m;
 }

void NumeroMayor::cargarNumeros() {
	int n1, n2, numero;
	cout << "Ingrese un numero: ";
	cin >> n1;
	cout << "Ingrese un numero: ";
	cin >> n2;
	numero = mayor(n1, n2);
	cout << numero;
}

int main() {
	NumeroMayor nro;
	nro.cargarNumeros();
	cin.get();
	cin.get();
}