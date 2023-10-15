#include <iostream>

using namespace std;
void main() {
	int num = 4;
	double e = 1.0;
	double factorial = 1.0;
	int i = 1;
	while (i <= num) {
		factorial *= i;
		e += 1 / factorial;
		i++;
	}
	cout << "e: " << e;
}