#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>  

using namespace std;
void InputArrayRand(int*, int);
void OutputArray(int*, int);
void SelectionSort(int*, int);


int main() {
	srand(time(0)); // Random numbers

	int n;
	cout << "Enter number of array elements: ";
	cin >> n;

	int* arr = new int[n];
	InputArrayRand(arr, n);
	cout << "Array before sort: ";
	OutputArray(arr, n);

	SelectionSort(arr, n);
	cout << "Array after sort: ";
	OutputArray(arr, n);

	delete[] arr; //clear memory
	return 0;

}



void InputArrayRand(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = static_cast<float>(rand()) / RAND_MAX * 30;;
	}
}

void OutputArray(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << "   ";
	}
	cout << endl;
}
void SelectionSort(int* arr, int size) { 
	for (int i = 0; i < size - 1; i++) { //The last one will be sorted 
		int smallestIndex = i;
		for (int j = i + 1; j < size; j++) {
			if (arr[j] < arr[smallestIndex]) {
				smallestIndex = j;
			}

		}
		swap(arr[i], arr[smallestIndex]);
	}
}
