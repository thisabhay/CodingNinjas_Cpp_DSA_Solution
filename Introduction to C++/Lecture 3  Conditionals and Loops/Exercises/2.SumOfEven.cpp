/*
Given a number N, print sum of all even numbers from 1 to N.
Input Format :
Integer N
Output Format :
Required Sum 
Sample Input 1 :
 6
Sample Output 1 :
12
*/
#include<iostream>
using namespace std;


int main(){

   int N, i, sum=0;
   cin >> N;
   i=1;
   while(i<=N)
   {
	   if(i%2==0)
		sum = sum + i;
		i = i + 1;
   }
  cout << sum << endl;

}