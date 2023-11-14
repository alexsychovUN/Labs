#include <iostream>
using namespace std;

const int ROW = 5;
const int COL = 6;
int maxRowIndex;
int maxColIndex;
int minRowIndex;
int minColIndex;

void inputMatrix(int matrix[ROW][COL]) {

    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            matrix[i][j] = static_cast<float>(rand()) / RAND_MAX * 33 - 20;
        }
    }
}
void printMatrix(int matrix[ROW][COL]) {
    cout << "Matrix:" << endl;
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void numberOfPositivesRows(int matrix[ROW][COL]) {
    for (int i = 0; i < ROW; i++) {
        int counter = 0;
        for (int j = 0; j < COL; j++) {
            if (matrix[i][j] > 0){
                counter += 1;
            }
        }
        cout << "Number of positives in row" << i + 1 << "=" << counter << endl;
    }
    cout << endl;
}
void findMax(int matrix[ROW][COL]) {
    int max = matrix[0][0];
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            if (max < matrix[i][j]) {
                max = matrix[i][j];
                maxRowIndex = i;
                maxColIndex = j;
            }
        }
    }
    cout << "Max element: " << matrix[maxRowIndex][maxColIndex] << " with coord " << maxRowIndex << "*" << maxColIndex << endl;
}
void findMin(int matrix[ROW][COL]) {
    int max = matrix[0][0];
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            if (max > matrix[i][j]) {
                max = matrix[i][j];
                minRowIndex = i;
                minColIndex = j;
            }
        }
    }
    cout << "Min element: " << matrix[minRowIndex][minColIndex] << " with coord " << minRowIndex << "*" << minColIndex << endl;
}
void swapRows(int matrix[ROW][COL]) {
    int temp[COL];
    // Temporary array
    for (int i = 0; i < COL; ++i) {
        temp[i] = matrix[0][i];
    }
    // swap first row
    for (int i = 0; i < COL; ++i) {
        matrix[0][i] = matrix[ROW - 1][i];
    }
    // swap last row
    for (int i = 0; i < COL; ++i) {
        matrix[ROW - 1][i] = temp[i];
    }
}
void numberOfNegativesColumns(int matrix[ROW][COL]) {
    for (int i = 0; i < COL; i++) {
        int counter = 0;
        for (int j = 0; j < ROW; j++) {
            if (matrix[j][i] < 0) {
                counter += 1;
            }
        }
        cout << "Number of negatives in column" << i + 1 << "=" << counter << endl;
    }
    cout << endl;
}

int main() {
    // variat 5
	srand(time(0));
	int array[ROW][COL];

    inputMatrix(array);
    printMatrix(array);

    swapRows(array);
    printMatrix(array);

    numberOfPositivesRows(array);

   
    findMax(array);
    findMin(array);
    array[maxRowIndex][maxColIndex] = 1;
    array[minRowIndex][minColIndex] = -1;
    printMatrix(array);

    numberOfNegativesColumns(array);
}