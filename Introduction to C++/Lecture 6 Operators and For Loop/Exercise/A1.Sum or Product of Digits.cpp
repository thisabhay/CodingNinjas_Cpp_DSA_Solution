
/*Write a program that asks the user for a number N and a choice C. And then give them the possibility to choose between computing the sum and computing the product of all integers in the range 1 to N (both inclusive).
If C is equal to -
 1, then print the sum
 2, then print the product
 Any other number, then print '-1' (without the quotes)
Input format :
Line 1 : Integer N
Line 2 : Choice C
Output Format :
 Sum or product according to user's choice
Constraints :
1 <= N <= 12
Sample Input 1 :
10
1
Sample Output 1 :
55
Sample Input 2 :
10
2
Sample Output 2 :
3628800
Sample Input 3 :
10
4
Sample Output 3 :
-1
*/
#include<iostream>
using namespace std;

int main() {
	int n,c,sum=0,mul=1,i=-1;
	cin>>n;
	cin>>c;
	if(c==1)
	{
	   while(n<13 && n>0)
	    {
	         sum=sum+n;             
	         n--;
	    }
            cout<<sum;
    }
	else if(c==2)
      	{
      		while(n>0)
      		{
      			mul=mul*n;
      			n--;
      		}
      		cout<<mul;
      	}
  	else
      	{
      		cout<<i;
      	}
}


