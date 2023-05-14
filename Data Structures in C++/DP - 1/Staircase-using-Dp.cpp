// Code : Staircase using Dp
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
void getSteps(int n,int i,int &count){
    if(i==n){
        count++;
        return;
    }
    if(i>n){
        return;
    }
    getSteps(n,i+1,count);
    getSteps(n,i+2,count);
    getSteps(n,i+3,count);
}
int getStepsDP(int n){
    long long int *arr=new long long int[n+1];
    int divisor=pow(10,9)+7;
    arr[n]=1;
    if(n>0){
    arr[n-1]=1;
    }
    if(n>1){
    arr[n-2]=2;
    }
    for(int i=n-3;i>=0;i--){
        arr[i]=(arr[i+1]+arr[i+2]+arr[i+3])%divisor;
    }
    int ans=arr[0];
    delete [] arr;
    // long long int divisor=pow(10,9)+7;
    return ans;
}
int main(){
    
    // write your code here
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        // int count=0;
        // getSteps(n,0,count);
        // cout<<count<<endl;
        cout<<getStepsDP(n)<<endl;
    }
    return 0;
}