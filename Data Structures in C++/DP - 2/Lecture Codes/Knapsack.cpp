// Code : Knapsack
#include<climits>
int knapsack(int *weights, int *values, int n, int maxWeight)
{
	//write your code here
    
    if(maxWeight<0){
        return INT_MIN;
    }
    if(maxWeight==0){
        return 0;
    }
    if(n==0){
        return 0;
    }
    int a=values[0]+knapsack(weights+1,values+1,n-1,maxWeight-weights[0]);
    int b=knapsack(weights+1,values+1,n-1,maxWeight);
    return max(a,b);
}