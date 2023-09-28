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
    float answer = Sum(weight, priceForOne);
    cout << "Вартість покупки " << answer << " грн.";
}

float Sum(float weight, float priceForOne) {
    return weight * priceForOne;
}