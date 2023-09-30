#include <iostream>
#include <cmath>


// Var 22
using namespace std;
void main() {
	double a = 0.9;
	double x;
	double result;
	cout << "Enter X: ";
	cin >> x;

	if (x > 3.5) {
		result = sin(x) * log10(x);
	}
	else {
		result = pow(cos(a * x), 2);
	}
	cout << "Y: " << result;


}