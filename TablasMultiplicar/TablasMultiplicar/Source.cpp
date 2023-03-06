#include<iostream>;
using namespace std;

int main() {
	int valor, f;
	cout << "Que tabla desea calcular: ";
	cin >> valor;
	for (f = 1; f <= 12; f++) {
		cout << f * valor;
		if (f < 12) {
			cout << "-";
		}
		else {
			cout << ".";
		}
	}
}