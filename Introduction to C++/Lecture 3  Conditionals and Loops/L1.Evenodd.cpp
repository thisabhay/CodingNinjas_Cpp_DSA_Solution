#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter the number" << endl;
	cin >> n;

	if (n % 2 == 0) {
		cout << "Even" << endl;
	} else {
		cout << "Odd" << endl;
	}
}

