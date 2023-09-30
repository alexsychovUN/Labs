// Calculating the profit for the work depends of type of work

#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	double x;
	char choice;

	cout << "What type of your work?" << endl << "1 - À" << endl << "2 - Á " << endl << "3 - Â" << endl;
	cin >> choice;
	cout << "Type the X: ";
	cin >> x;

	if (choice == '1') {
		float f = 11.2 * cos(2 * x - 1) + abs(sin(1.5)) / 1.7;
		float y = 100 * abs(f + 50);
		float tax = y / 100 * 10;
		float paidWithTax = y - tax;

		cout << "Amount paid for work: " << y << endl;
		cout << "The tax is: " << tax << endl;
		cout << "Paymant with tax: " << paidWithTax;
	}
	else if (choice == '2') {
		float f = 9.2 * cos(2 * x) - abs(sin(x) / 1.1);
		float y = 150 * abs(f + 100);
		float tax = y / 100 * 15;
		float paidWithTax = y - tax;

		cout << "Amount paid for work: " << y << endl;
		cout << "The tax is: " << tax << endl;
		cout << "Paymant with tax: " << paidWithTax;
	}
	else if (choice == '3') {
		float f = 12.4 * sin(abs(x / 2.1)) - 8.3 * cos(1.2 * x);
		float y = 100 * abs(f + 135);
		float tax = y / 100 * 20;
		float paidWithTax = y - tax;
	}
}
