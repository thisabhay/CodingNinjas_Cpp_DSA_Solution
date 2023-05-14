// Code : Min Steps to 1
#include<climits>
int helper(int n, int *arr){
    if(n<=1){
        arr[1]=0;
        return 0;
    }
    if(arr[n]!=-1){
        return arr[n];
    }
    int a=1+helper(n-1,arr);
    int b=INT_MAX;
    if(n%2==0){
        b=1+helper(n/2,arr);
    }
    int c=INT_MAX;
    if(n%3==0){
        c=1+helper(n/3,arr);
    }
    arr[n]=min(a,min(b,c));
    return arr[n];
    
}
int countMinStepsToOne(int n)
{
	//Write your code here
    if(n<=1){
        return 0;
    }
    
    int arr[n+1];
    for(int i=0;i<=n;i++){
        arr[i]=-1;
    }
    return helper(n,arr);
}