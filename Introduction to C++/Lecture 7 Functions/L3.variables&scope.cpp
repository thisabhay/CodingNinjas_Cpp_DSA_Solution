#include <iostream>
using namespace std;

int fact(int n) {
	//cout << a << endl;
	int ans = 1;
	for (int i = 1; i <=n ;i++) {
		ans = ans * i;
	}
	return ans;
}

int main() {
	int a;
	cin >> a;
	int output = fact(a);
	//cout << ans << endl;
	//cout << n << endl;
	cout << output << endl;
}