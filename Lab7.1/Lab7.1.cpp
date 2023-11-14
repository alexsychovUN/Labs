#include <iostream>
#include <vector>
using namespace std;
const int MAXSIZE = 5;

// Enter your matrix with rand() function
void inputMatrix(float matrix[MAXSIZE][MAXSIZE], int& line, int& kol) {
    do {
        cout << "input numbers of rows >=1  ";
        cin >> line;
        cout << "input numbers of columns >=1  ";
        cin >> kol;
        if ((line < 1) || (kol <= 1)) { //контроль правильності введення
            cout << "If''s few, input more" << endl;
        }
    }
    while ((line < 1) && (kol < 1));
    for (int i = 0; i < line; i++) {
        for (int j = 0; j < kol; j++) {
            matrix[i][j] = rand() % 10;
        }
    }
}  
void inputVector(vector<float>& array, int& kol) {
    do {
        cout << "input numbers of columns >=1  ";
        cin >> kol;
        if (kol < 1) {
            cout << "If''s few, input more";
        }
    } while (kol < 1);
    array.clear();
    for (int i = 0; i < kol; i++) {
        array.push_back(rand() % 10);
    }
}
void printMatrix(float matrix[MAXSIZE][MAXSIZE], int& line, int& kol) {
    cout << "Matrix:" << endl;
    for (int i = 0; i < line; i++) {
        for (int j = 0; j < kol; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
void printVector(vector<float> array, int kol) {
    cout << "Vector:" << endl;
    for (int i = 0; i < kol; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void matrixVectorMultiply(float matrix[MAXSIZE][MAXSIZE], int& line, int& kol, vector<float>& array, int& vecSize) {
    if (kol != vecSize) {
        cout << "Cannot perform multiplication. Matrix column count should match vector size." << endl;
        return;
    }

    vector<float> result(line, 0);

    for (int i = 0; i < line; i++) {
        for (int j = 0; j < kol; j++) {
            result[i] += matrix[i][j] * array[j]; 
        }
    }

    cout << "Result of matrix-vector multiplication:" << endl;
    printVector(result, line);
}



int main() {
    
    float matrix[MAXSIZE][MAXSIZE];
    vector<float> array;

    int i, j;
    int row1;
    int col1, col2;
    
    inputMatrix(matrix, row1, col1);
    inputVector(array, col2);
    printMatrix(matrix, row1, col1);
    printVector(array, col2);

    int vecSize = array.size();
    matrixVectorMultiply(matrix, row1, col1, array, vecSize);
   
}

