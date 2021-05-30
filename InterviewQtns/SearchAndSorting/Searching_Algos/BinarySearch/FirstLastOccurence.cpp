int Binary(int arr[], int left, int right, int x){
      
    while(left<=right){
        int mid = left + (right-left)/2;
        if(arr[mid]== x){
             return mid;
        }
        else if(arr[mid]>x){
            right = mid-1;
        }
        else {
            left = mid+1;
        }
    }
    return -1;
}

vector<int> find(int arr[], int n , int x )
{
    // code here
    
    int left=0, right = n-1;
 
    int index = Binary(arr, left, right, x);
    if(index == -1){
        return {-1,-1};
    }
    int i=index, j=index;
    
    while(i>-1 && arr[i-1]==arr[i]){
        i--;
    }
    while(j<n && arr[j] == arr[j+1]){
        j++;
    }
    return {i,j};
}