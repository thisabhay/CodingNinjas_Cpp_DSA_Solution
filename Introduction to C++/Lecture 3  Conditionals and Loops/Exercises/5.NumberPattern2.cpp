/*Number Pattern 2
Send Feedback
Print the following pattern
Pattern for N = 4
    1
   23
  345
 4567
The dots represent spaces.*/
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int i = 1;
  while (i <= n) {
	int k=1;
    while (k <= n - i) {
      cout << " ";
	  k=k+1;
    }
    int j = 1;
    while (j <= i) {
      cout << (j + i - 1);
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }
}
