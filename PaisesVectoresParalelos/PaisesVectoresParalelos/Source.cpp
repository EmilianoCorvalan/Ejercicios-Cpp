#include<iostream>;
using namespace std;

/*Cargar en un vector los nombres de 5 países y en otro vector paralelo la cantidad de habitantes del mismo. Ordenar alfabéticamente e imprimir los resultados. Por último ordenar con respecto a la cantidad de habitantes (de mayor a menor) e imprimir nuevamente.*/

class PaisesPoblacion {
private: 
	char paises[5][40];
	int habitantes[5];
public:
	void cargar();
	void ordenar();
	void ordenarHabitantes();
	void imprimir();
};

void PaisesPoblacion::cargar() {
	for (int f = 0; f < 5; f++) {
		cout << "Ingrese el pais: ";
		cin.getline(paises[f], 40);
		cout << "Ingrese cantidad de habitantes: ";
		cin >> habitantes[f];
		cin.get();
	}
}

void PaisesPoblacion::ordenar(){
	for (int k = 0; k < 4; k++) {
		for (int f = 0; f < 4 - k; f++){
			if (strcmp(paises[f],paises[f+1]) > 0) {
				char auxpaises[40];
				strcpy_s(auxpaises, 40, paises[f]);
				strcpy_s(paises[f], 40, paises[f + 1]);
				strcpy_s(paises[f + 1], 40, auxpaises);
				int auxhab;
				auxhab = habitantes[f];
				habitantes[f] = habitantes[f + 1];
				habitantes[f + 1] = auxhab;
			}
		}
	}
}
void PaisesPoblacion::ordenarHabitantes() {
	for (int k = 0; k < 4; k++) {
		for (int f = 0; f < 4 - k; f++) {
			if (habitantes[f] < habitantes[f + 1]) {
				int auxhab;
				auxhab = habitantes[f];
				habitantes[f] = habitantes[f + 1];
				habitantes[f + 1] = auxhab;

				char auxpaises[40];
				strcpy_s(auxpaises, 40, paises[f]);
				strcpy_s(paises[f], 40, paises[f + 1]);
				strcpy_s(paises[f + 1], 40, auxpaises);
			}
		}
	}
}

void PaisesPoblacion::imprimir() {
	cout << "\n";
	for (int f = 0; f < 5; f++) {
		cout << paises[f] << " - " << habitantes[f] << endl;
	}
	cout << "\n";
}


int main() {
	PaisesPoblacion pp;
	pp.cargar();
	pp.ordenar();
	cout << "\n" << "Paises ordenados alfabeticamente: ";
	pp.imprimir();
	pp.ordenarHabitantes();
	cout << "\n" << "Paises ordenados por habitantes: ";
	pp.imprimir();
}