#include<iostream>

using namespace std;

int main() {
    int nota1, nota2, nota3;
    cout << "Ingrese primer numero: ";
    cin >> nota1;
    cout << "Ingrese segundo numero: ";
    cin >> nota2;
    cout << "Ingrese tercer numero: ";
    cin >> nota3;
    cout << "\n";
    if (nota1 > nota2) {
        if (nota1 > nota3){
            cout << "El mayor es: ";
            cout << nota1;
        }
        else {
            cout << "El mayor es: ";
            cout << nota3;
        }
    }
    else {
        if (nota2 > nota3) {
            cout << "El mayor es: ";
            cout << nota2;
        }
        else {
            cout << "El mayor es: ";
            cout << nota3;
        }
    }
}
    
