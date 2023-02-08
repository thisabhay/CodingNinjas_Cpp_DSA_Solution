/*Print the following pattern for the given number of rows.
Pattern for N = 5
E
DE
CDE
BCDE
ABCDE
Input format :
N (Total no. of rows)*/
#include <iostream>
using namespace std;

int main() {
  int N, i = 1, j;
  char ch;
  cin >> N;
  while (i <= N) {
    j = 1;
    ch = 'A' + N - i;
    while (j <= i) {
      cout << ch;
      j++; ch++;
    }
    cout << endl;
    i++;
  }
}
