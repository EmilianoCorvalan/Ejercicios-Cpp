#include<iostream>;
using namespace std;
/*
Plantear una clase que permita cargar un valor entero por teclado. Definir un método que solicite la carga del entero y llame a otro método al que le pasamos el valor ingresado y proceda a mostrar los valores enteros desde el 1 hasta el valor que llega como parámetro (es decir el ingresado por teclado)
*/
class ContadorNumeros {
private:
	void procesarContador(int valor);
public: 
	void cargarNumero();
};


void ContadorNumeros::procesarContador(int valor){
	int f;
	for (f = 1; f <= valor; f++) {
		cout << f;
		if (f < valor) {
			cout << "-";
		}
	}
}
void ContadorNumeros::cargarNumero(){
	int valor;
	cout << "Ingrese numero: ";
	cin >> valor;
	procesarContador(valor);
}


int main() {
	ContadorNumeros contador1;
	contador1.cargarNumero();
	cin.get();
	cin.get();
}