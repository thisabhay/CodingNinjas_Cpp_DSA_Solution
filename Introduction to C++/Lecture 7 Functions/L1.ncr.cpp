#include <iostream>
using namespace std;

int factorial(int n) {
	int ans = 1;
	int i = 1;
	while (i <= n) {
		ans = ans * i;
		i++;
	}
	return ans;
}

int main() {
	int n, r;
	cin >> n >> r;
	
	int fact_n = factorial(n);
	int fact_r = factorial(r);
	int fact_n_r = factorial(n - r);
	int ans = fact_n/(fact_r * fact_n_r);
	cout << ans << endl;
	

	/*
	int fact_n = 1;
	int i = 1;
	while (i <= n) {
		fact_n = fact_n * i;
		i++;
	}

	int fact_r = 1;
	i = 1;
	while (i <= r) {
		fact_r = fact_r * i;
		i++;
	}

	int fact_n_r = 1;
	i = 1;
	while (i <= n - r) {
		fact_n_r = fact_n_r * i;
		i++;
	}
	cout << fact_n/(fact_r * fact_n_r) << endl;
	*/
}

