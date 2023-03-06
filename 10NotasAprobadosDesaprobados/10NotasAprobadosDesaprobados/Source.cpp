#include<iostream>;
using namespace std;

int main() {
	int aprobados = 0, desaprobados = 0, f, nota;
	for (f = 1; f <= 10; f++) {
		cout << "Ingrese nota: ";
		cin >> nota;
		if (nota >= 7) {
			aprobados++;
		}
		else {
			desaprobados++;
		}
	}
	cout << "total aprobados: ";
	cout << aprobados;
	cout << "\n";
	cout << "total desaprobados: ";
	cout << desaprobados;
}
