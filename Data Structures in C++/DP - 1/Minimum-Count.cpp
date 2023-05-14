// Code : Minimum Count
#include<climits>
int minCount(int n){
    int *arr=new int[n+1];
    arr[1]=1;
    for(int i=2;i<=n;i++){
        int j=1;
        int min=INT_MAX;
        while(j*j<=i){
            if(arr[i-j*j]<min){
                min=arr[i-j*j];
            }
            j++;
        }
        j--;
        if(j*j==i){
            arr[i]=1;
        }
        else{
            arr[i]=1+min;
        }
    }
    int ans=arr[n];
    delete [] arr;
    return ans;
}