/*Print the following pattern for the given N number of rows.
Pattern for N = 4
4444
333
22
1
Input format :
Integer N (Total no. of rows)*/
#include<iostream>
using namespace std;


int main(){

    int N;
	cin>>N;
	int i=1;
	while(i<=N)
	{
		int j=1;
		while(j<=N-i+1)
		{
			cout<<N-i+1;
			j++;
		}
		cout<<endl;
		i++;
	}
  
}