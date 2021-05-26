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