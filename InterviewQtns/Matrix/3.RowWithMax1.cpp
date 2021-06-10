class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int indexOFI=-1, ind2=0;
	     int j = m-1;
	    for(int i=0;i<n;i++){
	        while( j>=0 && arr[i][j]==1 ){
	            j--;
	            
	            ind2=i;
	        }
	    }
	    
	    if(arr[0][m-1]==0 && ind2==0){
	        return -1;
	    }
	    
	    return  ind2;
	}