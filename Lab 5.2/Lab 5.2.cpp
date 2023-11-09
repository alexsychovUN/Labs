#include <iostream>
#include <cmath>
#include <Windows.h>

bool findSumOfSquares(int n, int* a, int* b) {
    for (*a = 1; *a <= sqrt(n); (*a)++) {
        int bSquared = n - (*a) * (*a);
        if (bSquared >= 0 && sqrt(bSquared) == floor(sqrt(bSquared))) {
            *b = sqrt(bSquared);
            return true;
        }
    }
    return false;
}
using namespace std;
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    cout << "������ ���������� ����� n: ";
    cin >> n;

    int a, b;

    if (findSumOfSquares(n, &a, &b)) {
        cout << n << " ����� ������ � ������ ���� �������� ���� ����������� �����: " << n << " = " << a << "^2 + " << b << "^2" << endl;
    }
    else {
        cout << n << " �� ����� ������ � ������ ���� �������� ���� ����������� �����." << endl;
    }

    return 0;
}
