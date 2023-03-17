#include<iostream>

using namespace std;

/*Crear una matriz de 2 filas y 5 columnas. Realizar la carga de componentes por columna (es decir primero ingresar toda la primer columna, luego la segunda columna y así sucesivamente)
Imprimir luego la matriz.*/

class Matriz4 {
private:
	int mat[2][5];
public:
	void cargar();
	void imprimir();

};

void Matriz4::cargar() {
	for (int c = 0; c < 5; c++) {
		for (int f = 0; f < 2; f++) {
			cout << "Ingrese componente para columna " << c+1 << ": ";
			cin >> mat[f][c];
		}
	}
}

void Matriz4::imprimir() {
	for (int f = 0; f < 2; f++) {
		for (int c = 0; c < 5; c++) {
			cout << mat[f][c] << " ";
		}
		cout << "\n";
	}
}

int main() {
	Matriz4 m4;
	m4.cargar();
	m4.imprimir();
}