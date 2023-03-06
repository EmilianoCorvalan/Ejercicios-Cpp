#include<iostream>

using namespace std;

int main() {
	int nroCuenta;
	float saldo, totalSaldoAcreedores=0;
	do {
		cout << "\n";
		cout << "Ingrese numero de cuenta: ";
		cin >> nroCuenta;
		cout << "Ingrese saldo actual: ";
		cin >> saldo;
		if (saldo == 0) {
			cout << "\n";
			cout << "El numero de cuenta " << nroCuenta << " se encuentra en estado Nulo.";
			cout << "\n";
		}
		else {
			if (saldo > 0) {
				cout << "\n";
				cout << "El numero de cuenta " << nroCuenta << " se encuentra en estado Positivo.";
				cout << "\n";
				totalSaldoAcreedores = totalSaldoAcreedores + saldo;
			}
			else {
				cout << "\n";
				cout << "El numero de cuenta " << nroCuenta << " se encuentra en estado Negativo.";
				cout << "\n";
			}
		}
	} while (nroCuenta >= 0);
	cout << "\n";
	cout << "El total de saldo de los acreedores es de: " << totalSaldoAcreedores << ".";

}