// Subset Sum
#include<bits/stdc++.h>
#include<climits>
using namespace std;
void helper(int *arr,int n,int value,int &count,int sum){
    if(n<=0){
        if(sum==value){
            count++;
        }
        // sum=INT_MIN;
        return;
    }
    
    helper(arr+1,n-1,value,count,sum);
    // if(sum+arr[0]!=value){
    if(sum==INT_MIN){
        sum=0;
    }
    helper(arr+1,n-1,value,count,sum+arr[0]);
    // }
    
}
int getSubsetCount(int *arr,int n,int value){
    int count=0;
    int sum=0;
    helper(arr,n,value,count,sum);
    
    return count;
    
}
int main(){
    
    // write your code here
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int *arr=new int[n];
        int value;
        cin>>value;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(n<=0){
            continue;
        }
        cout<<getSubsetCount(arr,n,value)<<endl;
    }
    return 0;
}