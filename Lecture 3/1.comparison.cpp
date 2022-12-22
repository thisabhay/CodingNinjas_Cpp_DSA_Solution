#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "Enter two numbers" << endl;

	cin >> a >> b;

	if (a == b) {
		cout << "Hey these are equal" << endl;
	} else if (a < b) {
		cout << "a is smaller" << endl;
	} else {
		cout << "a is greater" << endl;
	}

	/*
	if (a == b) {
		cout << "Hey these are equal" << endl;
	} else {
		if (a < b) {
			cout << "a is smaller" << endl;
		} else {
			cout << "a is greater" << endl;
		}
	}
  */
	/*
	if (a == b) {
		cout << "Hey these are equal" << endl;
	}


	 if (a == b) {
		cout << "Hey these are equal" << endl;
	} else {
		cout << "Not equal" << endl;
	}
	*/

	// Single line comment
}

