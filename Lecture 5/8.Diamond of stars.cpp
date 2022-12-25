/*Print the following pattern for the given number of rows.
Note: N is always odd.
Input format :
N (Total no. of rows and can only be odd)
Output format :
Pattern in N lines
Constraints :
1 <= N <= 49
Sample Input 1:
5
Sample Output 1:
  *
 ***
*****
 ***
  *
Sample Input 2:
3
Sample Output 2:
  *
 ***
  *
*/
#include <iostream>
using namespace std;

int main() {
  /*  Read input as specified in the question.
   * Print output as specified in the question.
   */
  int N, n1, n2,spac,star;
  cin >> N;
  n1 = (N + 1) / 2; 
  n2 = (N - 1) / 2;

    int i = 1;
    while (i <= n1) {
      spac=1;
          while(spac<=n1-i)
         {
             cout<<' ';
             spac++;
         }
         star=1;
         while(star<=2*i-1)
         {
             cout<<'*';
             star++;
         }
         cout<<endl;
         i++;
    }
    i = n2;
     while (i>=1) {
     spac=1;
          while(spac<=n1-i)
         {
             cout<<' ';
             spac++;
         }
         star=1;
         while(star<=2*i-1)
         {
             cout<<'*';
             star++;
         }
         cout<<endl;
         i--;
    }
}