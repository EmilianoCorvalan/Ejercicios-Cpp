#include <iostream>;
using namespace std;

/*Implementar la clase operaciones.Se deben cargar dos valores enteros, calcular su suma, resta, multiplicación y división, cada una en un método, imprimir dichos resultados.*/

class Operadores {
private:
	int n1, n2;
public:
	void inicializar();
;	void suma();
	void resta();
	void multiplicacion();
	void division();
};
void Operadores::inicializar() {
	cout << "Ingrese un numero entero: ";
	cin >> n1;
	cout << "Ingrese otro numero entero: ";
	cin >> n2;
}
void Operadores::suma(){
	cout << "\n";
	cout << "La suma es: " << n1 + n2;
	cout << "\n";
}
void Operadores::resta() {
	cout << "\n";
	cout << "La resta es: " << n1 - n2;
	cout << "\n";
}
void Operadores::multiplicacion() {
	cout << "\n";
	cout << "La multiplicacion es: " << n1 * n2;
	cout << "\n";
}
void Operadores::division() {
	cout << "\n";
	cout << "La division es: " << n1 / n2;
	cout << "\n";
}

int main() {
	Operadores cuenta;
	cuenta.inicializar();
	cuenta.suma();
	cuenta.resta();
	cuenta.multiplicacion();
	cuenta.division();
	return 0;
}

