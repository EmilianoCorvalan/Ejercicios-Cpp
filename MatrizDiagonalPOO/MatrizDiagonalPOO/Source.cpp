#include<iostream>

using namespace std;

class Matriz2 {
private:
    int mat[4][4];
public:
    void cargar();
    void imprimirDiagonalPrincipal();
    void imprimirMatriz();
};

void Matriz2::cargar()
{
    for (int f = 0; f < 4; f++)
    {
        for (int c = 0; c < 4; c++)
        {
            cout << "Ingrese componente: ";
            cin >> mat[f][c];
        }
    }
}

void Matriz2::imprimirDiagonalPrincipal() {
    for (int k = 0; k < 4; k++) {
        cout << mat[k][k] << " ";
    }
    cin.get();
    cin.get();
}

void Matriz2::imprimirMatriz() {
    for (int f = 0; f < 4; f++) {
        for (int c = 0; c < 4; c++) {
            cout << mat[f][c];
        }
        cout << endl;
    }
}

int main() {
    Matriz2 m2;
    m2.cargar();
    m2.imprimirMatriz();
    m2.imprimirDiagonalPrincipal();
}