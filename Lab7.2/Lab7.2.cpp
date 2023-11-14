#include <iostream>
#include <vector>
using namespace std;


void inputMatrix(int matrix[5][5]) {
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matrix[i][j] = static_cast<float>(rand()) / RAND_MAX * 10;
        }
    }
}
void printMatrix(int matrix[5][5]) {
    cout << "Matrix:" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    srand(time(0));
	int matrix[5][5];
	inputMatrix(matrix);
    printMatrix(matrix);
    int sum = 0;

	for (int i = 0; i < 5; i++) { //Порахували перший рядок
		sum += matrix[0][i];
	}
    cout << sum << endl;
    for (int i = 0; i < 5; ++i) { // Обернена діагональ
        sum += matrix[i][4 - i];
    }
    cout << sum << endl;
    for (int i = 0; i < 5; ++i) {
        sum += matrix[4][i]; // Останній ряд
    }
    cout << sum << endl;
    for (int i = 2; i < 5; ++i) {
        sum += matrix[i][i - 2]; // Половина головної діагоналі знизу
    }
    cout << sum << endl;
}