/**Pyramid Number Pattern
Send Feedback
Print the following pattern for the given number of rows.
Pattern for N = 4
   1
  212
 32123
4321234
Input format : N (Total no. of rows)

Output format : Pattern in N lines

Sample Input :
5
Sample Output :
    1
   212
  32123
 4321234
543212345
*/
#include <iostream>
using namespace std;
int main() {
  int n, i, j;

  cin >> n;

  for (i = 1; i <= n; i++) {
    for (int k = 1; k <= n - i; k++)
      cout << " "; // for spaces from right
    for (j = i; j > 0; j--)
      cout << j; // prints rightside nums
    for (int l = 2; l <= i; l++)
      cout << l; // prints leftside nums
    cout << endl;
  }
}