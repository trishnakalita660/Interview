 int rotation(int arr[],int n,int start,int end){
       if(end<start){
           return 0;
       }
       else if(end==start){
           return start;
       }
       int mid = start+ (end-start)/2;
       if(mid>start && arr[mid]<arr[mid-1]){
           return mid;
       }
       if(mid<end && arr[mid+1]<arr[mid]){
           return mid+1;
       }
       if(arr[end]>arr[mid]){
           return rotation(arr,n,start, mid-1); 
       }
    return rotation(arr,n, mid+1, end);
       
   }
	int findKRotation(int arr[], int n) {
	    // code here
	    int start =0, end = n-1;
	    return rotation(arr, n, start,end);
	}
