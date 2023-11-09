#include <iostream>
#include <cmath>
#include <Windows.h>


// ������� ��� ���������� ���������
int factorial(int n) {
    if (n == 0) return 1;
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}


// ������� ��� ���������� tg(x) � ��� �������
double taylor_tan(double x, int n) {
    double result = 0.0;
    for (int i = 1; i <= n; i++) {
        /*if (i % 2 == 1) {
            result += pow(x, 2 * i - 1) / factorial(2 * i - 1);
        }
        else {
            result -= pow(x, 2 * i - 1) / factorial(2 * i - 1);
        }*/
        result += 2 * (i - 2) * pow(x, 2 * i - 1) / factorial(2 * i - 1);
    }
    return result;
}


using namespace std;
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const double step = 0.5;
    const int n_terms = 10;  // ʳ������ ������ � ��� �������
    double x, y, exact_y, error, approx_y;

    cout << "x\t\tExact y\t\tApproximated y\tError" << endl;

    for (x = -3; x <= 3; x += step) {
        if (x >= -3 && x <= 0) {
            // ���������� ����� �������� ������� y ��� ����� ��������
            exact_y = (tan(x * x) - 2 * x) / tan(x);
            approx_y = (taylor_tan((x * x), 10) - 2 * x) / taylor_tan((x), 10);
        }
        else {
            exact_y = tan((x + 2) * (x + 2)) - tan(x);
            approx_y = taylor_tan(((x + 2) * (x + 2)), 10) - taylor_tan((x), 10);
        }

        // ���������� ��������� �������� y �� ��������� ���� �������
        /*double approx_y = taylor_tan(x, n_terms);*/
        

        // ���������� �������
        error = abs(exact_y - approx_y);

        cout << x << "\t\t" << exact_y << "\t\t" << approx_y << "\t\t" << error << endl;
    }

    return 0;
}
