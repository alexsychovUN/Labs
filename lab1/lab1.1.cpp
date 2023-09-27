#include <iostream>
#include <cmath>

using namespace std;
void main() {
	float x;
	float y;

	cout << "X:";
	cin >> x;
	cout << "Y:";
	cin >> y;

	float f = sqrt(abs((sin(x) + pow(y, 4)) / cos(y) - pow(x, 4)));
	cout << "f(x, y) = " << f << '\n';
}