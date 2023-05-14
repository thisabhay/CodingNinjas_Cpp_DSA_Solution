// Pairs with difference K
#include<unordered_map>
int getPairsWithDifferenceK(int *arr, int n, int k) {
	// Write your code here
    unordered_map<int,int> freq;
    int count=0;
    for(int i=0;i<n;i++){
        
        if(freq.count(arr[i]-k)>0){
            count=count+freq[arr[i]-k];
        }
        if(freq.count(arr[i]+k)>0 && (arr[i]-k)!=(arr[i]+k)){
            count=count+freq[arr[i]+k];
        }
        freq[arr[i]]++;
    }
    
    return count;
}