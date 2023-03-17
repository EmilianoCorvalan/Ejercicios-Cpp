#include<iostream>;
using namespace std;

/*Implementar una clase que permita cargar un vector de 5 elementos. Definir tres métodos sobrecargados que :
void imprimir(); //imprime todo el vector
void imprimir(int hasta);//imprime desde el principio del vector hasta el valor que le pasamos
void imprimir(int desde,int hasta);//imprime un rango de valores del vector.*/

class Vector {
	int vec[5];
public:
	Vector();
	void imprimir();
	void imprimir(int hasta);
	void imprimir(int desde, int hasta);
};

Vector::Vector() {
	for (int f = 0; f < 5; f++) {
		cout << "Ingrese un numero: ";
		cin >> vec[f];
	}
}
void Vector::imprimir() {
	for (int f = 0; f < 5; f++) {
		cout << vec[f];
		cout << " ";
	}
}
void Vector::imprimir(int hasta) {
	for (int f = 0; f < hasta; f++) {
		cout << vec[f];
		cout << " ";
	}
}

void Vector::imprimir(int desde, int hasta) {
	for (int f = desde; f < hasta; f++) {
		cout << vec[f];
		cout << " ";
	}
}

int main() {
	Vector v;
	cout << "Completo\n";
	v.imprimir();
	cout << endl;
	cout << "Hasta\n";
	v.imprimir(3);
	cout << endl;
	cout << "Desde hasta\n";
	v.imprimir(2, 4);
}