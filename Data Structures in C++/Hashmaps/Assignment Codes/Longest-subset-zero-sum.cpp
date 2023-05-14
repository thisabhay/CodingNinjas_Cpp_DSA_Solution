// Longest subset zero sum
#include<unordered_map>
int lengthOfLongestSubsetWithZeroSum(int* arr, int n) {
    // Write your code here
    unordered_map<int,int> sum_map;
    // unordered_map<int,int> freq;
    int maxCount=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==0){
            maxCount=i+1;
        }
        else if(sum_map.count(sum)>0){
            int newCount=i-sum_map[sum];
            if(newCount>maxCount){
                maxCount=newCount;
            }
        }
        
        else{
        sum_map[sum]=i;
        }
    }
    return maxCount;
    
}