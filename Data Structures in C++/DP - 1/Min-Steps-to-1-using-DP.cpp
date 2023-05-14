// Code : Min Steps to 1 using DP
#include<climits>
int countStepsToOne(int n)
{
	//Write your code here
    int *arr=new int[n+1];
    for(int i=0;i<=n;i++){
        arr[i]=-1;
    }
    arr[0]=0;
    arr[1]=0;
    for(int i=2;i<=n;i++){
        int a=arr[i-1];
        int b=INT_MAX;
        if(i%2==0){
            b=arr[i/2];
        }
        int c=INT_MAX;
        if(i%3==0){
            c=arr[i/3];
        }
        arr[i]=1+min(a,min(b,c));
    }
    int ans=arr[n];
    delete [] arr;
    return ans;
}