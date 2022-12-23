/*Print the following pattern for the given N number of rows.
Pattern for N = 4
1
21
321
4321
Input format :
Integer N (Total no. of rows)
*/

#include<iostream>
using namespace std;


int main(){
	int N,i,j,k;
	cin>>N;
	while(i<=N){
		j=1; k=i;
		while(j<=i)
		{
			cout<<(k);
			k=k-1;
			j=j+1;
		}
		cout<<endl;
		i=i+1;
	}
}
