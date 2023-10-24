#include <iostream>
#include <iomanip>

using namespace std;
void main() {
	double precision;
	cout << "Enter precision: ";
	cin >> precision;
	double e = 1.0;
	double factorial = 1.0;
	int i = 1;
	double sum;
	sum = 1.0;
	while (sum > precision) {
		factorial *= i;
		sum = 1 / factorial;
		e += sum;
		i++;


	}
	int counter = 0;
	while (precision < 1) {
		precision *= 10;
		counter ++;

	}

	cout << fixed << setprecision(counter) << e << endl;
}
