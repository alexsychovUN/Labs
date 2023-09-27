#include <iostream>
using namespace std;

// Function declaration
float Sum(float weight);

int main() {
    float weight;
    cout << "Apples weight(kg): ";
    cin >> weight;
    float answer = Sum(weight);
    cout << "Apples price for " << weight << " kg = " << answer;
}

float Sum(float weight) {
    return weight * 8.5;
}