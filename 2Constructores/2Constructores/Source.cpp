#include<iostream>;
using namespace std;

class Punto {
	int x;
	int y;
public:
	Punto();
	Punto(int x, int y);
	void imprimir();
};

Punto::Punto() {
	x = 0;
	y = 0;
}

Punto::Punto(int x1, int y1) {
	x = x1;
	y = y1;
}

void Punto::imprimir() {
	cout << endl << x << " - " << y << endl;
}

int main() {
	Punto p1;
	p1.imprimir();
	cout << endl;
	Punto p2(10, 20);
	p2.imprimir();
}