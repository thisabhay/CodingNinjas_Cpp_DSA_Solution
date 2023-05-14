// Code : In-place heap sort
void insert(int *pq,int n) {
        // pq.push_back(element);

        int childIndex = n - 1;

        while (childIndex > 0) {
            int parentIndex = (childIndex - 1) / 2;

            if (pq[childIndex] < pq[parentIndex]) {
                int temp = pq[childIndex];
                pq[childIndex] = pq[parentIndex];
                pq[parentIndex] = temp;
            } else {
                break;
            }

            childIndex = parentIndex;
        }
    }
void removeMin(int *pq,int n) {
        // Write your code here
        
        int parentIndex=0;
        int leftChildIndex=2*parentIndex+1;
        int rightChildIndex=2*parentIndex+2;
        while(leftChildIndex<n){
            int minIndex=parentIndex;
            if(pq[minIndex]>pq[leftChildIndex]){
                minIndex=leftChildIndex;
            }
            if(rightChildIndex<n && pq[rightChildIndex]<pq[minIndex]){
                minIndex=rightChildIndex;
            }
            if(minIndex==parentIndex){
                break;
            }
            int temp=pq[minIndex];
            pq[minIndex]=pq[parentIndex];
            pq[parentIndex]=temp;
            parentIndex=minIndex;
            leftChildIndex=2*parentIndex+1;
            rightChildIndex=2*parentIndex+2;
        }
        
    }
void heapSort(int arr[], int n) {
    // Write your code
    for(int i=1;i<n;i++){
        insert(arr,i+1);
    }
    for(int i=n-1;i>0;i--){
        int temp=arr[0];
        arr[0]=arr[i];
        arr[i]=temp;
        removeMin(arr,i);
    }
    
    
}