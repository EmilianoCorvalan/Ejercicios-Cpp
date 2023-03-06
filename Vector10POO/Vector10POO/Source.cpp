#include<iostream>;
using namespace std;

/*Cargar un vector de 10 elementos y verificar posteriormente si el mismo está ordenado de menor a mayor.
*/

class Vector {
private:
	int vec[10];
public:
	void cargarVector();
	void verificarMenorMayor();
};

void Vector::cargarVector() {
	for (int f = 0; f < 10; f++) {
		cout << "Ingrese valor: ";
		cin >> vec[f];
	}
	
}

void Vector::verificarMenorMayor() {
	bool ordenado = true;
	for (int f = 0; f < 9; f++) {
		if (vec[f] > vec[f + 1]) {
			ordenado = false;
			break;
		}
	}
	if (ordenado == true) {
		cout << "El vector esta ordenado.";
	}
	else {
		cout << "El vector no esta ordenado.";
	}
}

int main() {
	Vector vector1;
	vector1.cargarVector();
	vector1.verificarMenorMayor();
}