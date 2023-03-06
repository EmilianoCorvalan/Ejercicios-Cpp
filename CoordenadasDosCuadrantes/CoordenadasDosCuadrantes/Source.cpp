#include<iostream>;
using namespace std;

int main() {
	int x, y;
	cout << "Ingrese coordenada x: ";
	cin >> x;
	cout << "Ingrese coordenada y: ";
	cin >> y;

	if (x > 0 and y > 0) {
		cout << "Pertenece al primer cuadrante.";
	}
	else 
		if (x<0 and y>0) {
		cout << "Pertenece al segundo cuadrante";
	}
	else {
			cout << "No pertenece al primer o segundo cuadrante.";
	}
}