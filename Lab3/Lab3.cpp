#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

double CalculateGregoryPi(int iterations);
double CalculateWallisPi(int iterations);

using namespace std;
int main() {
	const double exactPi = M_PI;

	int iterations;
	cout << "Enter the number of iterations: ";
	cin >> iterations;

	//Results for Gregory row
	double resultGregory = CalculateGregoryPi(iterations);
	cout << "Results with Gregory row: " << resultGregory << endl;
	cout << "Difference with real Pi: " << fabs(exactPi - resultGregory) << endl;

	//Results for Wallis mupliplication
	double resultWallis = CalculateWallisPi(iterations);
	cout << "Results with Wallis mupliplication: " << resultWallis << endl;
	cout << "Difference with real Pi: " << fabs(exactPi - resultWallis) <<endl;
}

double CalculateGregoryPi(int iterations) {
	double pi = 0.0;
	for (int i = 0; i < iterations; i++) {
		pi += (i % 2 == 0 ? 1.0 : -1.0) / (2.0 * i + 1);
	}
	return pi * 4.0;
}

double CalculateWallisPi(int iterations) {
	double pi = 2.0;
	for (int i = 1; i <= iterations; i++) {
		pi *= (4.0 * i * i) / ((4.0 * i * i) - 1);
	}
	return pi;
}