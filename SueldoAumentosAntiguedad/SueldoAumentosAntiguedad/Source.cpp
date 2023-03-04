#include<iostream>;
using namespace std;

int main() {
	float sueldo;
	int antiguedad;

	cout << "Ingrese sueldo: ";
	cin >> sueldo;
	cout << "Ingrese antiguedad: ";
	cin >> antiguedad;

	if (sueldo < 500 and antiguedad >= 10) {
		float aumento = sueldo * 0.2;
		float sueldoTotal = sueldo + aumento;
		cout << "El sueldo sera de: ";
		cout << sueldoTotal;
	}
	else {
		if (sueldo < 500 && antiguedad < 10) {
			float aumento = sueldo * 0.05;
			float sueldoTotal = sueldo + aumento;
			cout << "El sueldo sera de: ";
			cout << sueldoTotal;
		}
		else {
			cout << "El sueldo sera de: ";
			cout << sueldo;
		}
	}
	return main();
}