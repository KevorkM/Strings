#include <iostream>
#include <string>

using namespace std;

//void Func(string aString);//passing it by the values - copy

void Func(string& aString); // this is how it should be done instead. adding & or const should help with the memory

int main() {

	cout << " String Library\n" << endl;

	string MyString = "Hello";
	string MyString2;

	cout << MyString << endl;

	cout << "Please enter a string: " << endl;
	cin >> MyString2;

	cout << MyString2;

	string MyString3 = MyString + MyString2;
	MyString3 += "!";
	cout << "Result is: " << MyString3 << endl;

	MyString[0] = 'h';// just like cstrings

	cout << "The length of MyString3 is:" << MyString3.length() << endl;

	cout << "The cstring representation is: " << MyString3.c_str() << endl;

	return 0;
}