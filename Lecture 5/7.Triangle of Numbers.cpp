/*Print the following pattern for the given number of rows.
Pattern for N = 5
        1
       232
      34543
     4567654
    567898765
The dots represent spaces.
Input format :
Integer N (Total no. of rows)*/
#include <iostream>
using namespace std;

int main() {
  int N, i, j, k;
  cin >> N;
  i = 1;
  while (i <= N) {
    k = 1;
    while (k <= N - i) {
      cout << ' ';
      k++;
    }
    j = 1;
    while (j <= i) {
      cout <<i+ j - 1;
      j++;
    }
    j = i - 1;
    while (j >= 1) {
      cout << j+i-1;
      j--;
    }
    cout << endl;
    i++;
  }
}
