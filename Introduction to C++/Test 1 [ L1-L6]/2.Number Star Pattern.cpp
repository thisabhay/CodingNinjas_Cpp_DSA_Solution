/*Print the following pattern for given number of rows.
Input format :

Line 1 : N (Total number of rows)

Sample Input :
   5
Sample Output :
1234554321
1234**4321
123****321
12******21
1********1
*/
#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int l = n;
  for (int i = 1; i <= n; i++) {
    for (int j = n; j >= i; j--) {
      cout << n - j + 1;
    }
    if (i > 1) {
      for (int p = 1; p <= 2 * (i - 1); p++) {
        cout << "*";
      }
    }
    for (int j = l; j >= 1; j--) {
      cout << j;
    }
    l = l - 1;
    cout << endl;
  }
}