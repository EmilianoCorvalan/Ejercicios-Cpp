#include<iostream>

using namespace std;

int main() {
	int total=0, menorA9=0, entre9y10=0, masde10=0;
	float valor;
	do {
		cout << "Ingrese el peso en KG de la pieza: ";
		cin >> valor;
		if (valor < 9.8 and valor>0) {
			menorA9++;
		}
		else { 
			if (valor >= 9.8 and valor <= 10.2) {
				entre9y10++;
			}
			else 
				if(valor >10.2){
				masde10++;
			}
		}
		if (valor > 0) {
			total++;
		}
	} while (valor != 0);

	cout << "Piezas con menos de 9,8kg: ";
	cout << menorA9;
	cout << "\n";
	cout << "Piezas entre 9.8 y 10.2kg: ";
	cout << entre9y10;
	cout << "\n";
	cout << "Piezas con mas de 10.2kg: ";
	cout << masde10;
	cout << "\n";
	cout << "Total de piezas: ";
	cout << total;
}