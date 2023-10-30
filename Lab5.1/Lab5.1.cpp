#include <iostream>
#include <cmath>
#include <Windows.h>


// Функція для обчислення факторіалу
int factorial(int n) {
    if (n == 0) return 1;
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}


// Функція для обчислення tg(x) у ряді Тейлора
double taylor_tan(double x, int n) {
    double result = 0.0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            result += pow(x, 2 * i - 1) / factorial(2 * i - 1);
        }
        else {
            result -= pow(x, 2 * i - 1) / factorial(2 * i - 1);
        }
    }
    return result;
}



int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const double step = 0.5;
    const int n_terms = 10;  // Кількість термінів у ряді Тейлора
    double x, y, exact_y, error;

    std::cout << "x\t\tExact y\t\tApproximated y\tError" << std::endl;

    for (x = -3; x <= 3; x += step) {
        if (x >= -3 && x <= 0) {
            // Обчислюємо точне значення функції y для цього діапазону
            exact_y = tan(x * x) - 2 * x;
        }
        else {
            exact_y = tan((x + 2) * (x + 2)) - tan(x);
        }

        // Обчислюємо наближене значення y за допомогою ряду Тейлора
        double approx_y = taylor_tan(x, n_terms);

        // Обчислюємо похибку
        error = std::abs(exact_y - approx_y);

        std::cout << x << "\t\t" << exact_y << "\t\t" << approx_y << "\t\t" << error << std::endl;
    }

    return 0;
}
