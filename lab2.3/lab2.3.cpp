#include <iostream>
#include <Windows.h>

using namespace std;

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int choice;

	cout << "����i�� ����� ���i�'�: (42, 81, 95)" << endl;
	cin >> choice;
	switch (choice)
	{
	case 42:
		cout << "�����: Orion M42 " << "\n" << "��������� �i���i��� �i���: 1000" << "\n"; 
		break;
	case 81:
		cout << "�����: Ursa Major M81 " << "\n" << "��������� �i���i��� �i���: 100" << "\n";
		break;
	case 95:
		cout << "�����: Lion M95 " << "\n" << "��������� �i���i��� �i���: 50" << "\n";

	default:
		cout << "������ 42, 81, ��� 95";
		break;
	}
}