// Matrix Chain Multiplication
#include<climits>
// DP
int matrixChainMultiplication(int* arr, int n){
    int **output=new int*[n+1];
    for(int i=0;i<=n;i++){
        output[i]=new int[n+1];
    }
    for(int s=n;s>=0;s--){
        for(int e=0;e<=n;e++){
            if(s>=(e-1)){
                output[s][e]=0;
                continue;
            }
            int min=INT_MAX;
            for(int k=s+1;k<=e-1;k++){
                int a=output[s][k];
                int b=output[k][e];
                int sum=a+b+arr[s]*arr[e]*arr[k];
                if(sum<min){
                    min=sum;
                }
            }
            output[s][e]=min;
        }
    }
    return output[0][n];
}