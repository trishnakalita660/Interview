class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int i=0,j=0;
        vector<int>ans;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }
            else {
                ans.push_back(nums2[j]);
                j++;
            }
        }
        while(i<nums1.size()){
            ans.push_back(nums1[i]);
            i++;
        }
        
        while(j<nums2.size()){
            ans.push_back(nums2[j]);
            j++;
        }
        for(auto x: ans){
            cout<<x<<" ";
        }
        int n= ans.size();
       return n%2!=0? double(ans[n/2]) : double((ans[n/2]+ans[(n/2)-1])/2.0);

    }
};