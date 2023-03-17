#include<iostream>

using namespace std;
/*El constructor tiene las siguientes características:

Tiene el mismo nombre de la clase.
Es el primer método que se ejecuta.
Se ejecuta en forma automática.
No puede retornar datos.
Se ejecuta una única vez.
Un constructor tiene por objetivo inicializar atributos.
*/

class Operarios {
private:
    float sueldos[5];
public:
    Operarios();
    void imprimir();
};

Operarios::Operarios()
{
    cout << "Carga de sueldos." << "\n";
    for (int f = 0; f < 5; f++)
    {
        cout << "Ingrese el sueldo:";
        cin >> sueldos[f];
    }
}

void Operarios::imprimir()
{
    for (int f = 0; f < 5; f++)
    {
        cout << sueldos[f] << "\n";;
    }
    cin.get();
    cin.get();
}

int main()
{
    Operarios op;
    op.imprimir();
    return 0;
}