#include<iostream>;
using namespace std;

/*Se desea saber la temperatura media trimestral de cuatro paises pequeños. Para ello se tiene como dato las temperaturas medias mensuales de dichos paises.
Se debe ingresar el nombre del país y seguidamente las tres temperaturas medias mensuales.
Seleccionar las estructuras de datos adecuadas para el almacenamiento de los datos en memoria.
a - Cargar por teclado los nombres de los países y las temperaturas medias mensuales.
b - Imprimir los nombres de los países y las temperaturas medias mensuales de las mismas.
c - Calcular la temperatura media trimestral de cada país.
d - Imprimir los nombres de los países y las temperaturas medias trimestrales.
e - Imprimir el nombre del país con la temperatura media trimestral mayor.*/

class TemperaturasPaises {
private:
	char paises[4][40];
	int temperatura[4][3];
	float mediaTrimestral[4];
public:
	void cargar();
	void imprimirPaisesTemperaturas();
	void calcularMediaTrimestral();
	void imprimirMediaTrimestral();
	void imprimirMayorMediaTrimestral();
};

void TemperaturasPaises::cargar() {
	for (int f = 0; f < 4; f++) {
		cout << "Ingrese pais: ";
		cin.get(paises[f], 40);
		for (int c = 0; c < 3; c++) {
			cout << "Ingrese temperatura " << c + 1 << " :";
			cin >> temperatura[f][c];
			cin.get();
		}
	}
}

void TemperaturasPaises::imprimirPaisesTemperaturas() {
	cout << endl;
	cout << "Temperaturas mensuales de Paises." << endl;
	for (int f = 0; f < 4; f++) {
		cout << paises[f] << endl;
		for (int c = 0; c < 3; c++) {
			cout << c + 1 << ".- " << temperatura[f][c] << " grados." << endl;
		}
	}
}

void TemperaturasPaises::calcularMediaTrimestral() {
	for (int f = 0; f < 4; f++) {
		int suma = 0;
		for (int c = 0; c < 3; c++) {
			suma = suma + temperatura[f][c];
		}
		mediaTrimestral[f] = suma / 3;
	}
}

void TemperaturasPaises::imprimirMediaTrimestral() {
	cout << endl;
	cout << "Temperaturas Medias Trimestrales." << endl;
	for (int f = 0; f < 4; f++) {
		cout << paises[f] << " - " << mediaTrimestral[f] << " grados." << endl;
	}
}
void TemperaturasPaises::imprimirMayorMediaTrimestral() {
	int mayor = mediaTrimestral[0];
	char auxpais[40];
	strcpy_s(auxpais, 40, paises[0]);
	for (int f = 0; f < 4; f++) {
		if (mediaTrimestral[f] > mayor) {
			mayor = mediaTrimestral[f];
			strcpy_s(auxpais,40,paises[f]);
		}
	}
	cout << endl;
	cout << "La mayor media trimestral es de: " << auxpais << " con " << mayor << " grados. " << endl;
}

int main() {
	TemperaturasPaises tp;
	tp.cargar();
	tp.imprimirPaisesTemperaturas();
	tp.calcularMediaTrimestral();
	tp.imprimirMediaTrimestral();
	tp.imprimirMayorMediaTrimestral();
}