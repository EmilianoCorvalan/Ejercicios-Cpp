#include<iostream>;
using namespace std;

int main() {
	int x = 0, aprobados = 0, desaprobados = 0;
	while (x <= 10) {
		float nota;
		cout << "\n";
		cout << "Ingrese nota: ";
		cin >> nota;
		if (nota >= 7 and nota <= 10) {
			aprobados++;
		}
		else {
			if (nota <= 7 and nota >= 1) {
				desaprobados++;
			}
			else {
				cout << "El valor no corresponde a una nota. Comience nuevamente...";
				return main();
			}
		}
		x = x+1;
	}
	cout << "Hay ";
	cout << aprobados;
	cout << " aprobados.";
	cout << "\n";
	cout << "Y hay ";
	cout << desaprobados;
	cout << " desaprobados.";

	return main();
}


