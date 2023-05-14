// Buy the ticket
#include<bits/stdc++.h>
#include<climits>
int buyTicket(int *arr, int n, int k) {
    // Write your code here
    priority_queue<int> pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
    }
    int count=0;
    while(!pq.empty()){
    for(int i=0;i<n;i++){
        if(arr[i]>=pq.top()){
            count++;
            if(i==k){
                return count;
            }
            arr[i]=INT_MIN;
            pq.pop();
        }
    }
    }
    return count;
}