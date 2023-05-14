// Code : Max Priority Queue
#include<bits/stdc++.h>
class PriorityQueue {
    // Declare the data members here
    vector<int> pq;
    public:
    PriorityQueue() {
        // Implement the constructor here
    }

    /**************** Implement all the public functions here ***************/

    void insert(int data) {
        // Implement the insert() function here
        pq.push_back(data);
        int i=pq.size()-1;
        while(i>0){
            if(pq[i]>pq[(i-1)/2]){
                int temp=pq[i];
                pq[i]=pq[(i-1)/2];
                pq[(i-1)/2]=temp;
                i=(i-1)/2;
            }
            else{
                break;
            }
        }
    }

    int getMax() {
        // Implement the getMax() function here
        return pq[0];
    }

    int removeMax() {
        // Implement the removeMax() function here
        if(isEmpty()){
            return 0;
        }
        int ans=pq[0];
        pq[0]=pq[pq.size()-1];
        pq[pq.size()-1]=ans;
        pq.pop_back();
        int parentIndex=0;
        int leftChildIndex=2*parentIndex+1;
        int rightChildIndex=2*parentIndex+2;
        while(leftChildIndex<pq.size()){
            int maxIndex=parentIndex;
            if(pq[maxIndex]<pq[leftChildIndex]){
                maxIndex=leftChildIndex;
            }
            if(rightChildIndex<pq.size() && pq[rightChildIndex]>pq[maxIndex]){
                maxIndex=rightChildIndex;
            }
            if(maxIndex==parentIndex){
                break;
            }
            int temp=pq[maxIndex];
            pq[maxIndex]=pq[parentIndex];
            pq[parentIndex]=temp;
            parentIndex=maxIndex;
            leftChildIndex=2*parentIndex+1;
            rightChildIndex=2*parentIndex+2;
        }
        return ans;
        
    }

    int getSize() { 
        // Implement the getSize() function here
        return pq.size();
    }

    bool isEmpty() {
        // Implement the isEmpty() function here
        return pq.size()==0;
    }
};