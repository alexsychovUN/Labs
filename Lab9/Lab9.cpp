#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void InputMatrix(int* arr[], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        arr[i] = new int[cols];
    }
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            arr[i][j] = rand() % 10;
        }
    }
}
void PrintMatrix(int* arr[], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}
int** MupliplyMatrices(int* arr1[], int* arr2[], int row1, int col1, int row2, int col2) {
    int** result = new int* [row1];
    for (int i = 0; i < row1; ++i) {
        result[i] = new int[col2];
        for (int j = 0; j < col2; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < col1; ++k) {
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }

    }
    return result;
}

void WriteMatricesToFile(int** matrix, int rows, int cols, const string& filename) {
    ofstream outputfile(filename);

    if (!outputfile.is_open()) {
        cout << "Unable to open file!" << endl;
        return;
    }

    outputfile << "Rows: " << rows << " Cols: " << cols << endl;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            outputfile << matrix[i][j] << " ";
        }
        outputfile << endl;
    }

    outputfile.close();
}

int main() {

    int row1 = 2, row2 = 2, col1 = 2, col2 = 2;
    //    do {
    //        cout << "Enter rows and cols for matrix's (row >= 1, col >= 1, row1 = col2):" << endl;
    //        cout << "Number of rows and cols of first matrix: " << endl;
    //        cin >> row1 >> col1;
    //        cout << "Number of rows and cols of second matrix: " << endl;
    //        cin >> row2 >> col2;
    //        if ((row1 != col2) || (row1 < 1) || (row2 < 1) || (col1 < 1) || (col2 < 1)) {
    //            cout << "Try once!" << endl;
    //        }
    //    } while ((row1 != col2) || (row1 < 1) || (row2 < 1) || (col1 < 1) || (col2 < 1));
    cout << "Matrix1: " << row1 << " * " << col1 << endl;
    cout << "Matrix2: " << row2 << " * " << col2 << endl;

    string path1 = "First.txt";
    string path2 = "Second.txt";
    string path3 = "Result.txt";

    ofstream fout1;
    ofstream fout2;
    ofstream fout3;

    fout1.open(path1);
    fout2.open(path2);
    fout3.open(path3);
    if (!fout1.is_open() || !fout2.is_open() || !fout3.is_open()) {
        cout << "Error with opening the files!" << endl;
        return 1;
    }

    fout1 << "Rows: " << row1 << " Cols: " << col1 << endl;
    fout2 << "Rows: " << row2 << " Cols: " << col2 << endl;


    int** arr1 = new int* [row1];
    int** arr2 = new int* [row2];

    InputMatrix(arr1, row1, col1);
    InputMatrix(arr2, row2, col2);

    cout << "First Matrix: " << endl;
    PrintMatrix(arr1, row1, col1);
    cout << "Second Matrix: " << endl;
    PrintMatrix(arr2, row2, col2);

    WriteMatricesToFile(arr1, row1, col1, path1);
    WriteMatricesToFile(arr2, row2, col2, path2);


    int** result = MupliplyMatrices(arr1, arr2, row1, col1, row2, col2);
    fout3 << "Result matrix: " << endl;
    WriteMatricesToFile(result, col2, row1, path3);

    cout << "Result Matrix: " << endl;
    PrintMatrix(result, col2, row1);


    fout1.close();
    fout2.close();
    fout3.close();

    for (int i = 0; i < row1; ++i) {
        delete[] result[i];
    }
    delete[] result;


    for (int i = 0; i < row1; ++i) {
        delete[] arr1[i];
    }
    delete[] arr1;

    for (int i = 0; i < row2; ++i) {
        delete[] arr2[i];
    }
    delete[] arr2;
    return 0;
}
