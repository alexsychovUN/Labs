#include <iostream>
#include <Windows.h>
using namespace std;


// Function declaration
float Sum(float weight);


int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP( 1251 );
   

    float weight, priceForOne;
    cout << "Введіть початкові дані:  " << endl;
    cout << "Ціна одного кілограма яблук(крб.):  ";
    cin >> priceForOne;
    cout << "Вага яблук(кг): ";
    cin >> weight;
    float answer = Sum(weight);
    cout << "Вартість покупки " << answer << " грн.";
}

float Sum(float weight) {
    return weight * 8.5;
}