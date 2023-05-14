// Merge K sorted arrays
#include<bits/stdc++.h>
class triplet{
    public:
    int element;
    int arrIndex;
    int elementIndex;
    triplet(int element,int arrIndex,int elementIndex){
        this->element=element;
        this->arrIndex=arrIndex;
        this->elementIndex=elementIndex;
    }
};
auto cmp=[](triplet a,triplet b){
    return a.element>b.element;
};
vector<int> mergeKSortedArrays(vector<vector<int>*> input) {
    // Write your code here
    // if(k==1){
    //     return 
    // }
    priority_queue<triplet,vector<triplet>,decltype(cmp)> pq(cmp);
    for(int i=0;i<input.size();i++){
        triplet t1((*input[i])[0],i,0);
        pq.push(t1);
    }
    vector<int> ans;
    while(!pq.empty()){
        triplet minEle=pq.top();
        pq.pop();
        ans.push_back(minEle.element);
        // if(pq.empty()){
        //     break;
        // }
        if((minEle.elementIndex+1)<input[minEle.arrIndex]->size()){
            triplet t2((*input[minEle.arrIndex])[minEle.elementIndex+1],minEle.arrIndex,minEle.elementIndex+1);
            pq.push(t2);
        }
        
    }
    return ans;
}