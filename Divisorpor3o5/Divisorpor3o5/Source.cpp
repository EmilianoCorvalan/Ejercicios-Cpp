#include<iostream>;
using namespace std;

int main() {
	int mul3=0, mul5=0, valor, f;
	for (f = 1; f <= 10; f++) {
		cout << "Ingrese un numero: ";
		cin >> valor;
		if (valor % 3 == 0) {
			mul3++;
		}
		else {
			if(valor % 5 == 0){
				mul5++;
			}
		}
	}
	cout << "Multiplos de 3: ";
	cout << mul3;
	cout << "\n";
	cout << "Multiplos de 5: ";
	cout << mul5;
}
