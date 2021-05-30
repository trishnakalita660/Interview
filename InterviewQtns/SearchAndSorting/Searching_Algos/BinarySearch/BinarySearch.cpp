
// ***********IMPORTANT************
//     int mid = (low + high)/2;
// But if we calculate the middle index like this means our code is not 100% correct, it contains bugs.
// That is, it fails for larger values of int variables low and high. Specifically, it fails if the sum of low and high is greater than the maximum positive int value(231 – 1 ).
// The sum overflows to a negative value and the value stays negative when divided by 2. In java, it throws ArrayIndexOutOfBoundException.
//     int mid = low + (high – low)/2;
// So it’s better to use it like this. This bug applies equally to merge sort and other divide and conquer algorithms.



int helper( int arr[],int l ,int r ,int x){
//    Recursion
   
    //   int mid=  (right+left)/2;
    //   if(arr[mid] == K ){
    //       return 1;
    //   }
    //   else if(arr[mid] > K){
           
    //       return helper(arr,left,mid-1,K);
    //   }
    //   else {
           
            
    //       return helper(arr,mid+1,right,K);
    //   }
       
    // return -1;
    
    // Better one
     while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == x)
            return 1;
        if (arr[m] < x)
            l = m + 1;
 
        else
            r = m - 1;
    }
    return -1;
}
int searchInSorted(int arr[], int N, int K) 
{ 
    
       // Your code here
       
       
       int left = 0;
       int right = N-1;
      
       
       return helper( arr, left,  right, K);
       
      
       
}
