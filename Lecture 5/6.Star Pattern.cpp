/*Print the following pattern
Pattern for N = 4
   *
  *** 
 *****
The dots represent spaces.*/
#include<iostream>
using namespace std;


int main(){
	int N,i,j,k;
	cin>>N;
	i=1;
	while(i<=N)
	{
		k=1;
		while(k<=N-i)
		{
			cout<<' ';
			k++;
		}
		j=1;
		while(j<=i)
		{
			cout<<'*';
			j++;
		}
		j=i-1;
		while(j>=1)
		{
			cout<<'*';
			j--;
		}
		cout<<endl;
		i++;
	}
}


