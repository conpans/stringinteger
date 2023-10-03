#include "std_lib_facilities.h"
int main() {
	string str1, str2, str3;

	cout << "Enter the first string: ";
	getline(cin, str1);

	cout << "Enter the second string: ";
	getline(cin, str2);

	cout << "Enter the third string: ";
	getline(cin, str3);

	if (str1 > str2) swap(str1, str2);
	if (str1 > str3) swap(str1, str3);
	if (str2 > str3) swap(str2, str3);

	cout << str1 << ", " << str2 << ", " << str3 << "\n";
}
