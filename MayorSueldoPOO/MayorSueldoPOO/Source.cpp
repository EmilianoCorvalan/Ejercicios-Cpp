#include<iostream>
using namespace std;

class SueldoOperarios {
private:
    char nombres[5][40];
    float sueldos[5];
public:
    void cargar();
    void mayorSueldo();
};

void SueldoOperarios::cargar()
{
    for (int f = 0; f < 5; f++)
    {
        cout << "Ingrese el nombre del empleado:";
        cin.getline(nombres[f], 40);
        cout << "Ingrese el sueldo:";
        cin >> sueldos[f];
        cin.get();
    }
}

void SueldoOperarios::mayorSueldo() {
    int pos;
    float mayor = sueldos[0];
    for (int f = 0; f < 5; f++) {
        if (sueldos[f] > mayor) {
            mayor = sueldos[f];
            pos = f;
        }
    }
    cout << "El mayor sueldo lo tiene " << nombres[pos] << " con un total de " << sueldos[pos];
}

int main() {
    SueldoOperarios sueldo;
    sueldo.cargar();
    sueldo.mayorSueldo();
}

