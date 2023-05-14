// Running Median
#include<queue>
void findMedian(int *arr, int n)
{
    // Write your code here
    if(n==0){
        return;
    }
    priority_queue<int> maxQ;
    priority_queue<int,vector<int>,greater<int>> minQ;
    maxQ.push(arr[0]);
    cout<<maxQ.top()<<" ";
    for(int i=1;i<n;i++){
        
        if(arr[i]<maxQ.top()){
            maxQ.push(arr[i]);
            if((maxQ.size()-minQ.size())>1){
                int temp=maxQ.top();
                maxQ.pop();
                minQ.push(temp);
                
            }
            
            }
              
        
        else{
            minQ.push(arr[i]);
            if((minQ.size()-maxQ.size())>1){
                int temp=minQ.top();
                minQ.pop();
                maxQ.push(temp);
            }
        }
        if(i%2==0){
            if(maxQ.size()>minQ.size()){
                cout<<maxQ.top()<<" ";
            }
            else{
                cout<<minQ.top()<<" ";
            }
        }
        else{
            cout<<(maxQ.top()+minQ.top())/2<<" ";
        }
        
        
    }
}
