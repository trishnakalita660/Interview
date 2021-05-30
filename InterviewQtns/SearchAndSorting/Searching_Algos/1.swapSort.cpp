 vector<int> findTwoElement(int *arr, int n) {
        // code here
        int i=0;
        while(i<n){
            if(arr[i]!=arr[arr[i]-1]){
                swap(arr[i],arr[arr[i]-1]);
            }
            else{
                i++;
            }
        }
        pair<int,int> m;
        
        pair<int,int> *x = m;
        for(int i=0;i<n;i++){
            if(arr[i]!=i+1){
                return {arr[i],i+1};
            }
        }
        return {};
    }