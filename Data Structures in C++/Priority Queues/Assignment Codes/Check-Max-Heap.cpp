// Check Max-Heap
bool isMaxHeap(int arr[], int n) {
    // Write your code here
    for(int i=0;i<=(n-1)/2;i++){
        int maxIndex=i;
        if(arr[2*i+1]>arr[maxIndex]){
            maxIndex=2*i+1;
        }
        if((2*i+2)<n && arr[maxIndex]<arr[2*i+2]){
            maxIndex=2*i+2;
        }
        if(maxIndex!=i){
            return false;
        }
    }
    return true;
}