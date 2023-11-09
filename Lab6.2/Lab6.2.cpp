#include <iostream>
#include <cstdlib>

using namespace std;
void InputArrayRand(int*, int);
void OutputArray(int*, int);


int main() {
	int size = 10;
	int arr1[10];
	int arr2[10];
	int k;
	
	InputArrayRand(arr1, size);

	cout << "First array: ";
	OutputArray(arr1, size);

	cout << "Which k-number do you want to delete?";
	cin >> k;

	for (int i = k; i < size; i++) {
		arr1[i] = arr1[i + 1];
	}
	size--;
	cout << "Result array: ";
	OutputArray(arr1, size);
}

void InputArrayRand(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 30;
	}
}

void OutputArray(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << "   ";
	}
	cout << endl;
}