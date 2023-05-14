// Code: Knapsack (Memoization and DP)
#include<climits>
// DP
int knapsack(int* weight, int* value, int n, int maxWeight) {
	// Write your code here
    int **output=new int*[n+1];
    for(int i=0;i<=n;i++){
        output[i]=new int[maxWeight+1];
        for(int j=0;j<=maxWeight;j++){
            output[i][j]=-1;
        }
    }
    for(int i=n;i>=0;i--){
        for(int w=0;w<=maxWeight;w++){
            if(w==0 || i==n){
                output[i][w]=0;
                continue;
            }
            int a=output[i+1][w];
            int b;
            if(w-weight[i]>=0){
                b=output[i+1][w-weight[i]]+value[i];
            }
            else{
                b=INT_MIN;
            }
            output[i][w]=max(a,b);
        }
    }
    int ans=output[0][maxWeight];
    // delete [] output;
    return ans;
}