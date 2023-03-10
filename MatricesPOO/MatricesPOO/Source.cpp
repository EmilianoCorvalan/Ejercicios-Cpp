#include<iostream>;
using namespace std;

class Matriz1 {
private:
	int mat[3][5];
public:
	void cargar();
	void imprimir();
};

void Matriz1::cargar() {
	for (int f = 0; f < 3; f++) { //Se cargan filas (3)
		for (int c = 0; c < 5; c++) {
			cout << "Ingrese componente: ";
			cin >> mat[f][c];
		}
	}
}

void Matriz1::imprimir() {
	for (int f = 0; f < 3; f++) {
		for (int c = 0; c < 5; c++) {
			cout << mat[f][c];
		}
		cout << endl;
	}
	cin.get();
	cin.get();
}

int main(){
	Matriz1 m;
	m.cargar();
	m.imprimir();
}