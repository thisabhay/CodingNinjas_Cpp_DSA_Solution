#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int i = 1;
	while (i <= n) {
		int spaces = 1;
		while (spaces <= n - i) {
			cout << ' ';
			spaces = spaces + 1;
		}

		int stars = 1;
		while (stars <= i) {
			cout << '*';
			stars = stars + 1;
		}
		cout << endl;
		i = i + 1;
	}
}
