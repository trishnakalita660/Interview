int findGap(int gap){
    if(gap<=1) return 0;
    return (gap/2)+(gap%2);
}
	void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	     int i,j,gap=n+m;
	     
	     for(gap= findGap(gap); gap>0; gap=findGap(gap)){
	         
	         for(i = 0; i+gap<n;i++){
	             if(arr1[i]>arr1[i+gap]){
	                 swap(arr1[i],arr1[i+gap]);
	             }
	         }
	         for(j= gap>n?gap-n:0; j<m&&i<n; j++,i++){
	            if(arr1[i]>arr2[j]){
	                 swap(arr1[i],arr2[j]);
	             } 
	         }
	         
	         if(j<m){
	             for(j=0;j+gap<m;j++){
	            if(arr2[j]>arr2[j+gap]){
	                 swap(arr2[j],arr2[j+gap]);
	             }  
	             }
	         }
	     }
	}

// ****************************more efficient
    //  shift larger number from array 2 to array 1
// N = 2, M = 3
// arr1[] = {10, 12}
// arr2[] = {5, 18, 20}
// Output: 5 10 12 18 20

class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	     int i=0,j=0,k=n-1;
	     while(i<=k && j<m){
	         if(arr1[i]<arr2[j]){
	             i++;
	         }
	         else {
	             swap(arr1[k--],arr2[j++]);
	         }
	     }
	     sort(arr1,arr1+n);
	     
	     sort(arr2,arr2+m);
	}
};