/*Confeccionar una clase llamada Sumatoria que solicite la carga valores enteros por teclado. Finalizar la carga de valores al ingresar el cero. Mostrar en el destructor la suma de los valores ingresados.*/

#include<iostream>
using namespace std;

class Sumatoria {
private:
	int suma;
public:
	void cargar();
	~Sumatoria();
};

void Sumatoria::cargar() {
	int valor;
	cout << "Ingrese valor:";
	cin >> valor;
	suma = 0;
	do {
		cout << "Ingrese un valor: ";
		cin >> valor;
		suma = suma + valor;
	} while (valor != 0);
}

	Sumatoria::~Sumatoria() {
		cout << endl;
		cout << "El valor total de los valores ingresados es: " << suma << endl;
		cout << endl;
	}

	int main() {
		Sumatoria s;
		s.cargar();
}