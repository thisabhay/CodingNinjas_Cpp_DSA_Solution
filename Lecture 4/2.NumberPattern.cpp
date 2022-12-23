/*Print the following pattern for the given N number of rows.
Pattern for N = 4
4444
4444
4444
4444
Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines*/
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


