// Code : Maximum Frequency Number
#include<unordered_map>
// #include<climits>
int highestFrequency(int arr[], int n) {
    // Write your code here
    unordered_map<int,int> freq;
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(freq[arr[i]]>freq[max]){
            max=arr[i];
        }
    }
    return max;
}