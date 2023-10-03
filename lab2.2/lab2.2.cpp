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
	float f;
	float y;
	float tax;
	float paidWithTax;


	
	cout << "Type the X: ";
	cin >> x;
	cout << "What type of your work?" << endl << "1 - À" << endl << "2 - Á " << endl << "3 - Â" << endl;
	start:
	cin >> choice;

	if (choice == '1') {
		f = 11.2 * cos(2 * x - 1) + abs(sin(1.5)) / 1.7;
		y = 100 * abs(f + 50);
		tax = y / 100 * 10;
		paidWithTax = y - tax;
	}
	else if (choice == '2') {
		f = 9.2 * cos(2 * x) - abs(sin(x) / 1.1);
		y = 150 * abs(f + 100);
		tax = y / 100 * 15;
		paidWithTax = y - tax;
	}
	else if (choice == '3') {
		f = 12.4 * sin(abs(x / 2.1)) - 8.3 * cos(1.2 * x);
		y = 100 * abs(f + 135);
		tax = y / 100 * 20;
		paidWithTax = y - tax;
	}
	else {
		cout << "Incorrect enter, try again!";
		goto start;
	}
	cout << "Amount paid for work: " << y << endl;
	cout << "The tax is: " << tax << endl;
	cout << "Paymant with tax: " << paidWithTax;
	
}
