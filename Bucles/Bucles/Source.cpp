#include<iostream>

using namespace std;

int main()
{
    int x = 1, numero;
    cout << "\n";
    cout << "Ingrese un valor positivo: ";
    cin >> numero;
    while (x <= numero)
    {
        cout << x;
        cout << " - ";
        x = x + 1;
    }
    return main();
}
