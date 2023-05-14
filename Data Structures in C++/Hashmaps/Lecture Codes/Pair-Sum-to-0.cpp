// Code : Pair Sum to 0
#include<unordered_map>
int pairSum(int *arr, int n) {
	// Write your code here
    unordered_map<int,int> freq;
    int count=0;
    for(int i=0;i<n;i++){
        int negative=arr[i]*-1;
        if(freq[negative]>0){
            count=count+freq[negative];
            // freq[negative]--;
        }
        freq[arr[i]]++;
    }
    return count;
}