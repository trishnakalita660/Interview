class Solution {
public:
    
    bool  binarySearch(vector<int>matrix,int target){
    int right = matrix.size()-1;
        int left =0;
        while(left<=right){
            int mid= left + (right-left)/2;
            if(matrix[mid]==target){
                return true;
            }
            else if(matrix[mid]>target){
                right = mid-1;
            }
            else {
                left = mid+1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        bool flag= false;
        for(int i=0;i<matrix.size();i++){
                    if(binarySearch(matrix[i] , target)){
                                   flag = true;
                                    break;
                            }
                    }
        return flag;
        
    }
};