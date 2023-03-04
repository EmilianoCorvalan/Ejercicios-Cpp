#include<iostream>

using namespace std;

int main() {
	int num1, num2;
	cout << "ingrese numero: ";
	cin >> num1;
	cout << "\n";
	cout << "ingrese numero: ";
	cin >> num2;
	cout << "\n";
	if (num1 > num2)
	{
		cout << "Es mayor el numero: ";
		cout << num1;
		cout << "\n";
	}
	else {
		cout << "Es mayor el numero: ";
		cout << num2;
		cout << "\n";
	}
	return 0;
}