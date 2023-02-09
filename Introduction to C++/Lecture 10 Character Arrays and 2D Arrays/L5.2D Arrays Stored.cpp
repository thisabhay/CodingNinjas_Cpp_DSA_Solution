#include <iostream>
using namespace std;

void printArray(int a[][5], int m, int n) {
	for(int i = 0; i < m; i++) {
		for(int j = 0;  j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;	
	}
}

int main() {

	int a[5][5] = {{1, 2}, {3, 4}};
	printArray(a, 5, 5);


	/*
	int a[100][100];
	int m, n;
	cin >> m >> n;


	// Taking input
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}

	printArray(a, m, n);
	*/
	/*
	// print array row wise
	cout << "Row wise : " << endl;
	for(int i = 0; i < m; i++) {
		for(int j = 0;  j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;	
	}

	cout << "Column wise : " << endl;
	for(int j = 0; j < n; j++) {
		for(int i = 0; i < m; i++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	*/
}
