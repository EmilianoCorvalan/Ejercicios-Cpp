#include<iostream>;
using namespace std;

/*Cargar un vector de 5 elementos enteros. Ordenarlo de mayor a menor y mostrarlo por pantalla, luego ordenar de menor a mayor e imprimir nuevamente.*/

class Ordenamiento {
private:
	int vec[5];
public:
	void cargar();
	void menorMayor();
	void mayorMenor();
};

void Ordenamiento::cargar() {
	for (int f = 0; f < 5; f++) {
		cout << "Ingrese un valor: ";
		cin >> vec[f];
	}
}

void Ordenamiento::menorMayor() {
	for (int k = 0; k < 4; k++) {
		for (int f = 0; f < 4-k; f++) {
			if (vec[f] > vec[f + 1]) {
				int aux;
				aux = vec[f];
				vec[f] = vec[f + 1];
				vec[f + 1] = aux;
			}
		}
	}
	cout << "El vector ordenado de menor a mayor es: ";
	for (int f = 0; f < 5; f++) {
		cout << vec[f] << " - ";
	}
	cout << endl;
}

void Ordenamiento::mayorMenor() {
	for (int k = 0; k < 4; k++) {
		for (int f = 0; f < 4 - k; f++) {
			if (vec[f] < vec[f + 1]) {
				int aux;
				aux = vec[f];
				vec[f] = vec[f + 1];
				vec[f + 1] = aux;
			}
		}
	}
	cout << "El vector ordenado de mayor a menor es: ";
	for (int f = 0; f < 5; f++) {
		cout << vec[f] << " - ";
	}
	cout << endl;
}

int main() {
	Ordenamiento ord;
	ord.cargar();
	ord.mayorMenor();
	ord.menorMayor();
}