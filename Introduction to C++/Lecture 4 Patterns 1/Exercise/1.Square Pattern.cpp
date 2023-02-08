/*Print the following pattern for the given N number of rows.
Pattern for N = 4
4444
4444
4444
4444
Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Constraints
0 <= N <= 50
Sample Input 1:
7
Sample Output 1:
7777777
7777777
7777777
7777777
7777777
7777777
7777777
Sample Input 1:
6
Sample Output 1:
666666
666666
666666
666666
666666
666666*/
#include<iostream>
using namespace std;


int main(){
	int N,i=1,j;
	cin>>N;
	while(i<=N)
	{
		j=1;
		while(j<=N)
		{
			cout<<N;
			j++;
		}
		cout<<endl;
		i=i+1;
	}
}


