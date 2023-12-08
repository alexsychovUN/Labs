#include <iostream>
#include <string>




using namespace std;
int stringLength(const string& str) {
	return str.length();
}
string makeSubstr(const string& str, int a, int b) {
	return str.substr(a, b);
}
string eraseFunc(string& str, int a, int b) {
	return str.erase(a, b);
}
int findIndex(const string& str, char a) {
	return str.find(a);
}
string appendStrings( string& str,  string& str2) {
	str2.append(str);
	return str2;
}
int main() {
	string input = "Sania Programmer";
	string input2 = "Nice ";
	/*getline(cin, input);*/
	
	cout << "Your string: " << input << endl ;
	cout << "String length: " << stringLength(input) << endl;
	cout << "Substr from 1 to 4: " << makeSubstr(input, 0, 5) << endl;
	cout << "Erase from 0 to 5: " << eraseFunc(input, 0, 6) << endl;
	cout << "String after erase: " << input << endl;
	cout << "Index of a: " << findIndex(input, 'a') << endl;
	cout << "Added some words: " << appendStrings(input, input2);
}