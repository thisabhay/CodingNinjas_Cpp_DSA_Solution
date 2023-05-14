// Reverse a Stack
void reverseStack(stack<int> &input, stack<int> &extra) {
    //Write your code here
    if(input.empty()){
        return;
    }
    int data=input.top();
    input.pop();
    reverseStack(input,extra);
    while(!input.empty()){
        int value=input.top();
        input.pop();
        extra.push(value);
    }
    input.push(data);
    while(!extra.empty()){
        int value=extra.top();
        extra.pop();
        input.push(value);
    }
    return;
}