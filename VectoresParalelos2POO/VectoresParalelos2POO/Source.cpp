#include<iostream>;
using namespace std;

/*
En un curso de 4 alumnos se registraron las notas de sus exámenes y se deben procesar de acuerdo a lo siguiente:
a) Ingresar Nombre y Nota de cada alumno (almacenar los datos en dos vectores paralelos)
b) Realizar un listado que muestre los nombres, notas y condición del alumno. En la condición, colocar "Muy Bueno" si la nota es mayor o igual a 8, "Bueno" si la nota está entre 4 y 7, y colocar "Insuficiente" si la nota es inferior a 4.
c) Imprimir cuantos alumnos tienen la leyenda “Muy Bueno”.
*/

class Curso {
private:
	char alumnos[4][20];
	int notas[4];
	int muyBuenos = 0;
public:
	void cargar();
	void mostrarCondicion();
	void mostrarMuyBuenos();
};

void Curso::cargar() {
	for (int f = 0; f < 4; f++) {
		cout << "Ingrese nombre de alumno: ";
		cin.getline(alumnos[f], 40);
		cout << "Ingrese nota: ";
		cin >> notas[f];
		cin.get();
	}
}
void Curso::mostrarCondicion() {
	for (int f = 0; f < 4; f++) {
		cout << alumnos[f] << " - " << notas[f];
		if (notas[f] >= 8) {
			cout << " - " << "Muy bueno" << endl;
		}
		else {
			if (notas[f] >= 4 and notas[f] <= 7) {
				cout << " - " << "Bueno" << endl;
			}
			else {
				cout << " - " << "Insuficiente" << endl;
			}
		}
	}
}
void Curso::mostrarMuyBuenos() {
	for (int f = 0; f < 4; f++) {
		if (notas[f] >= 8) {
			muyBuenos++;
		}
	}
	cout << "Total de alumnos muy buenos: " << muyBuenos << endl;
}

int main() {
	Curso cur;
	cur.cargar();
	cur.mostrarCondicion();
	cur.mostrarMuyBuenos();
}