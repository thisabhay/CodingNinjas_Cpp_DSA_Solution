/*Number Pattern 1
Send Feedback
Print the following pattern
Pattern for N = 4
1
23
345
4567
Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
Sample Input 1 :
3
Sample Output 1 :
1
23
345
*/

#include <iostream>
using namespace std;

int main() {
  int n,v;
  cin >> n;

  int i = 1;
  while (i <= n) {
    int j = 1;
    while (j <= i) {
      cout << (j+i-1);
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }
}
