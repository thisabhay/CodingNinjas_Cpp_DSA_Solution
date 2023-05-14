// Code : No. of balanced BTs
#include<cmath>
long long int helper(int n,long long int *arr){
    if(n<=1){
        return 1;
    }
    if(arr[n]!=-1){
        return arr[n];
    }
    int divisor=pow(10,9)+7;
    long long int smallOutput=((helper(n-1,arr)*helper(n-1,arr))%divisor)+((helper(n-1,arr)*helper(n-2,arr))%divisor)+((helper(n-2,arr)*helper(n-1,arr))%divisor);
	arr[n]=smallOutput%divisor;
    return arr[n];
}
long long int balancedBTs(int n){
    if(n<=1){
        return 1;
    }
    long long int *arr=new long long int[n+1];
    for(int i=0;i<=n;i++){
        arr[i]=-1;
    }
    arr[0]=1;
    arr[1]=1;
    long long int ans=helper(n,arr);
    delete [] arr;
    return ans;
}