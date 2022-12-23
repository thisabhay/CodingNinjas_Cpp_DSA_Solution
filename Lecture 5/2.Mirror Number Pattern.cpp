/*Mirror Number Pattern
Send Feedback
Print the following pattern for the given N number of rows.
Pattern for N = 4
    1
   12
  123
 1234
12345

The dots represent spaces.


Input format :
Integer N (Total no. of rows)*/
#include<iostream>
using namespace std;


int main(){
	int N,k,i=1,j;
	cin>>N;
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
			cout<<j;
			j++;
		}
		cout<<endl;
		i++;
	}

}