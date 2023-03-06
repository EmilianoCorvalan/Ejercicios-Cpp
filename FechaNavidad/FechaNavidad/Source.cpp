#include<iostream>;
using namespace std;

int main() {
	int dia, mes, año;
	cout << "Ingrese dia: ";
	cin >> dia;
	cout << "Ingrese mes: ";
	cin >> mes;
	cout << "Ingrese año: ";
	cin >> año;

	if (dia == 25 and mes == 12) {
		cout << "ES NAVIDAD!!!!";
		cout << "\n";
	}
	else {
		cout << "No es navidad :(";
	}
	return main();
}