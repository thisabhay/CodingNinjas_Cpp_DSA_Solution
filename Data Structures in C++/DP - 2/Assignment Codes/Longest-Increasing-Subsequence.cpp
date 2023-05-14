
// Longest Increasing Subsequence
#include<climits>
// DP
int longestIncreasingSubsequence(int* arr, int n){
    int **output = new int*[n+1];
    for(int i=0;i<=n;i++){
        output[i]=new int[n+1];
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(i==0){
                output[i][j]=0;
                continue;
            }
            if(j!=0 && arr[n-i]<=arr[n-j]){
                output[i][j]=output[i-1][j];
                continue;
            }
            int a=1+output[i-1][i];
            int b=output[i-1][j];
            output[i][j]=max(a,b);
        }
    }
    return output[n][0];
}