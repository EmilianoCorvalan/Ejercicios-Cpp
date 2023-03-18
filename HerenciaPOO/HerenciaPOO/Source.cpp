#include<iostream>;
using namespace std;

class Operacion {
protected:
	int valor1;
	int valor2;
	int resultado;
public:
	void cargar1();
	void cargar2();
	void mostrarResultado();

};

class Suma : public Operacion {
public: 
	void operar();
};

class Resta : public Operacion {
public:
	void operar();
};

void Operacion::cargar1(){
	cout << "Ingrese primer valor: ";
	cin >> valor1;
}

void Operacion::cargar2()
{
	cout << "Ingrese segundo valor:";
	cin >> valor2;
}

void Operacion::mostrarResultado()
{
	cout << resultado << "\n";
}

void Suma::operar() {
	resultado = valor1 + valor2;
}

void Resta::operar() {
	resultado = valor1 - valor2;
}

int main() {
	Suma suma1;
	suma1.cargar1();
	suma1.cargar2();
	suma1.operar();
	cout << "La suma es de: ";
	suma1.mostrarResultado();

	Resta r1;
	r1.cargar1();
	r1.cargar2();
	r1.operar();
	cout << "La resta es de: ";
	r1.mostrarResultado();
}