#include <iostream>
using namespace std;

int main() {
	int f;
	cout << "Enter Fah Value" << endl;
	cin >> f;
	int c = (5.0/9) * (f - 32);
	c = (5 * (f - 32))/9;

	int r = 10 % 3;

	cout << 10 % 3 << endl;
	cout << c << endl;

	int a;
	int b;
	cout << "Enter a and b" << endl;
	cin >> a >> b;

	bool isEqual = (a == b);
	bool isAGreater = (a > b);
	bool isALess = (a < b);
	cout << "Are they Equal " << isEqual << endl;
	cout << "is A greater " << isAGreater << endl;
	cout << "is A less " << isALess << endl; 

	bool third = isEqual && isAGreater;
	bool fourth = isEqual || isAGreater;

	cout << "Not equal " << !isEqual << endl;


}
