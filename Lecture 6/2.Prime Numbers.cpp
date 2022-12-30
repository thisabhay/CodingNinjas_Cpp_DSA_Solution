/*Given an integer N, print all the prime numbers that lie in the range 2 to N (both inclusive).
Print the prime numbers in different lines.
Input Format :
Integer N
Output Format :
Prime numbers in different lines
Constraints :
1 <= N <= 100
Sample Input 1:
9
Sample Output 1:
2
3
5
7*/
#include <iostream>
using namespace std;

int main(){
	int n,k;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		k=0;
		for(int j=1;j<=i;j++)
		{
			if(i%j==0)
			k++;
		}
		if(k==2)
		cout<<i<<endl;
	}
  
}