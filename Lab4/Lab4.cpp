#include <iostream>

using namespace std;
void main() {
	int precision;
	cout << "Enter number of members in a number: ";
	cin >> precision;
	double e = 1.0;
	double factorial = 1.0;
	int i = 1;
	while (i <= precision) {
		factorial *= i;
		e += 1 / factorial;
		i++;
	}
	cout << "e: " << e;
}