#include <iostream>
#include <cstdlib>

using namespace std;
int FindMax(int*, int);
void InputArrayRand(int*, int);
void InputArrayUser(int*, int);
void OutputArray(int*, int);





int main() {
	const int size = 10;
	int arr1[size];
	int arr2[size];
	InputArrayRand(arr1, size);

	cout << "First array: ";
	OutputArray(arr1, size);

	int max1 = FindMax(arr1, size);
	cout << "Array1 max: " << max1 << endl;

	for (int i = 0; i < size; i++) {
		arr2[i] = max1 - arr1[i];
	}
	cout << "Second array: ";
	OutputArray(arr2, size);
}

void InputArrayRand(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 30;
	}
}
void InputArrayUser(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
}
void OutputArray(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << "   ";
	}
	cout << endl;
}
int FindMax(int* arr, int size) {
	int max = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}