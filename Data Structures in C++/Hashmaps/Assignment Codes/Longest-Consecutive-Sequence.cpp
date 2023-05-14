// Longest Consecutive Sequence
#include<unordered_map>
vector<int> longestConsecutiveIncreasingSequence(int *arr, int n) {
    // Your Code goes here
    unordered_map<int,int> freq;
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    int i=0;
    int maxValue=0;
    int maxFreq=0;
    while(i<n){
        int j=arr[i]+1;
        while(freq.count(j)>0){
            freq[arr[i]]++;
            j++;
        }
        if(freq[arr[i]]>maxFreq){
            maxFreq=freq[arr[i]];
            maxValue=arr[i];
        }
        i++;
    }
    
    // for(int i=0;i<n;i++){
    //     if(freq[arr[i]]>maxFreq){
    //         maxFreq=freq[arr[i]];
    //         maxValue=arr[i];
    //     }
    // }
    vector<int> ans;
    ans.push_back(maxValue);
    if(maxFreq>1){
       ans.push_back(maxValue+maxFreq-1); 
    }
    return ans;
}