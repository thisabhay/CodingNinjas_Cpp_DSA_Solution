// Code : No. of balanced BTs using DP
#include<cmath>
int balancedBTs(int n) {
    // Write your code here
    if(n<=1){
        return 1;
    }
    int divisor=(int)(pow(10,9))+7;
    long long int *arr=new long long int[n+1];
    arr[0]=1;
    arr[1]=1;
    for(int i=2;i<=n;i++){
        arr[i]=(arr[i-1]*arr[i-1]%divisor+arr[i-2]*arr[i-1]%divisor+arr[i-1]*arr[i-2]%divisor)%divisor;
    }
    int ans=arr[n];
    delete [] arr;
    return ans;
}