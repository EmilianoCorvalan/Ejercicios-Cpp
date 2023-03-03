#include<iostream>;
using namespace std;

class MayorMenor {
private:
	int calcularMayor(int v1, int v2, int v3);
	int calcularMenor(int v1, int v2, int v3);
public:
	void cargarValores();
};

int MayorMenor::calcularMayor(int v1, int v2, int v3) {
	int m;
	if (v1 > v2 and v1 > v2) {
		m = v1;
	}
	else {
		if (v2 > v3) {
			m = v2;
		}
		else {
			m = v3;
		}
	}
	return m;
}

int MayorMenor::calcularMenor(int v1, int v2, int v3) {
	int m;
	if (v1 < v2 and v1 < v3) {
		m = v1;
	}
	else {
		if (v2 < v3) {
			m = v2;
		}
		else {
			m = v3;
		}
	}
	return m;
}

void MayorMenor::cargarValores(){
	int v1, v2, v3;
	cout << "Ingrese dato: ";
	cin >> v1;
	cout << "Ingrese dato: ";
	cin >> v2;
	cout << "Ingrese dato: ";
	cin >> v3;
	int mayor, menor;
	mayor = calcularMayor(v1, v2, v3);
	menor = calcularMenor(v1, v2, v3);
	cout << "El valor mayor es: " << mayor << "\n";
	cout << "El valor menor es: " << menor << "\n";
	cin.get();
	cin.get();
}

int main() {
	MayorMenor ejemplo1;
	ejemplo1.cargarValores();
	return 0;
}