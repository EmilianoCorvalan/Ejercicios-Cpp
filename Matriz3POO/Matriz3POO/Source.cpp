#include<iostream>

using namespace std;

class Matriz3 {
private:
    int mat[3][4];
public:
    void cargar();
    void primerFila();
    void ultimaFila();
    void primerColumna();
    void imprimir();
};

void Matriz3::cargar() {
    for (int f = 0; f < 3; f++) {
        for (int c = 0; c < 4; c++) {
            cout << "Ingrese componente: ";
            cin >> mat[f][c];
        }
    }
}

void Matriz3::imprimir()
{
    for (int f = 0; f < 3; f++)
    {
        for (int c = 0; c < 4; c++)
        {
            cout << mat[f][c] << " ";
        }
        cout << "\n";;
    }
    cin.get();
    cin.get();
}

void Matriz3::primerFila() {
    cout << "\n";
    cout << "Primera fila: " << endl;
        for (int c = 0; c < 4; c++) {
            cout << mat[0][c];
        }
        cin.get();
        cin.get();
}

void Matriz3::ultimaFila(){
    cout << "\n";
    cout << "Ultima fila: " << endl;
    for (int c = 0; c < 4; c++) {
        cout << mat[2][c];
    }
    cin.get();
    cin.get();
}

void Matriz3::primerColumna() {
    cout << "\n";
    cout << "Primer columna: ";
    for (int f = 0; f < 3; f++) {
        cout << mat[f][0] << endl;
    }
    cin.get();
    cin.get();
}

int main() {
    Matriz3 m;
    m.cargar();
    cout << "\n";
    m.imprimir();
    cout << "\n";
    m.primerFila();
    cout << "\n";
    m.primerColumna();
}