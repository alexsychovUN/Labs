#include <iostream>
#include <Windows.h>

using namespace std;

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int choice;

	cout << "Введiть номер сузiр'я: (42, 81, 95)" << endl;
	cin >> choice;
	switch (choice)
	{
	case 42:
		cout << "Назва: Orion M42 " << "\n" << "Приблизна кiлькiсть зiрок: 1000" << "\n"; 
		break;
	case 81:
		cout << "Назва: Ursa Major M81 " << "\n" << "Приблизна кiлькiсть зiрок: 100" << "\n";
		break;
	case 95:
		cout << "Назва: Lion M95 " << "\n" << "Приблизна кiлькiсть зiрок: 50" << "\n";

	default:
		cout << "Введіть 42, 81, або 95";
		break;
	}
}