#include<iostream>;
using namespace std;

int main() {
	int num1, num2, num3;
	cout << "\n";
	cout << "Ingrese un numero: ";
	cin >> num1;
	cout << "Ingrese un numero: ";
	cin >> num2;
	cout << "Ingrese un numero: ";
	cin >> num3;

	if (num1 < num2 and num1 < num3) {
		cout << num1;
	}
	else {
		if (num2 < num3)
			cout << num2;
		else {
			cout << num3;
		}
	}

	cout << "-";

	if (num1 > num2 and num1 > num3){
		cout << num1;
	}
	else {
		if (num2 > num3) {
			cout << num2;
		}
		else {
			cout << num3;
		}
	}

	return main();
}