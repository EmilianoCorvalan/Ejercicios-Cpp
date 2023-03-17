#include<iostream>;
#include<cstdlib>
#include<ctime>		
using namespace std;
/*
Desarrollar un programa que defina un vector de 5 enteros y muestre el mayor y menor elemento. En el constructor cargarlo con valores aleatorios entre 0 y 10.
La clase debe utilizar solo la palabra clave public en la declaración de la clase.*/

class Vector {
	int vec[5];
public:
	Vector();
	void imprimir();
	void mayor();
	void menor();
};

Vector::Vector() {
	srand(time(NULL));
	for (int f = 0; f < 5; f++) {
		vec[f] = rand() % 10 + 1;
	}
	cout << endl;
}

void Vector::mayor() {
	int mayor = vec[0];
		for (int f = 0; f < 5; f++) {
			if (vec[f] > mayor){
				mayor = vec[f];
		}
		}
		cout << "El numero mayor es: " << mayor << endl;
}

void Vector::menor() {
	int menor = vec[0];
	for (int f = 0; f < 5; f++) {
		if (vec[f] < menor) {
			menor = vec[f];
		}
	}
	cout << "El numero menor es: " << menor << endl;
}

void Vector::imprimir() {
	cout << endl;
	for (int f = 0; f < 5; f++) {
		cout << vec[f] << " ";
	}
	cout << endl;
}

int main() {
	Vector v;
	v.imprimir();
	v.menor();
	v.mayor();
}