//Enter a string of characters, including numbers, spaces, and alphabets. Identify the words that
//are palindromes (symmetric), variable identifiers, and positive integers.
#include <iostream>
#include <sstream>



using namespace std;
bool IsPadindrom(const string& word) {
	int left = 0;
	int right = word.length() - 1;

	while (left < right) {
		if (word[left] != word[right]) {
			return false;
		}
		left++;
		right--;
		
	}
	return true;
}

bool IsIdentifier(const string& word) {
	if (!isalpha(word[0]) && word[0] != '_') {
		return false;
	}
	for (char c : word) {
		if (!isalnum(c) && c != '_') {
			return false;
		}
	}
	return true;
}

bool IsNaturalNumber(const string& word) {
	for (char c : word) {
		if (!isdigit(c))
			return false;
	}
	int num = stoi(word);
	return num > 0;
}

int main() {
	string input;
	cout << "Enter a string of symbols: ";
	getline(cin, input);

	stringstream ss(input);
	string word;

	while (ss >> word) {
		if (IsPadindrom(word)) {
			cout << "Polindrom: " << word << endl;
		}

		if (IsIdentifier(word)) {
			cout << "Identifier: " << word << endl;
		}

		if (IsNaturalNumber(word)) {
			cout << "Natural number: " << word << endl;
		}
	}

}