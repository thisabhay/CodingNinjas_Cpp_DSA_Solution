// Stock Span
#include<bits/stdc++.h>
int* stockSpan(int *price, int size)  {
	// Write your code here
    int *stockSpan=new int[size];
    stack<int> s;
    stockSpan[0]=1;
    s.push(0);
    for(int i=1;i<size;i++){
        int count=1;
        while(!(s.empty()) && price[i]>price[s.top()]){
            // int value=s.top();
            count=count+stockSpan[s.top()];
            s.pop();
            // count++;
        }
        // s.push(price[i]);
        
        s.push(i);
        
        if(price[i]>price[i-1]){
            stockSpan[i]=count;
        }
        else{
            stockSpan[i]=1;
        }
    }
    // cout<<"ended"<<endl;
    return stockSpan;
}