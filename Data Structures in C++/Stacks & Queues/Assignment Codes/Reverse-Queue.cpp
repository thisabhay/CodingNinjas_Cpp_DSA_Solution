// Reverse Queue
#include<bits/stdc++.h>
void reverseQueue(queue<int> &input) {
	// Write your code here
    if(input.empty()){
        return;
    }
    int data=input.front();
    input.pop();
    reverseQueue(input);
    input.push(data);
    return;
}