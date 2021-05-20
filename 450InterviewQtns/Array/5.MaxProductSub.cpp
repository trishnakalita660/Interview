class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans= INT_MIN;
        int max1=1,min1=1;
        
        for(auto x: nums){
            int max2= max({x*max1,x,x*min1});
            
            int min2= min({x*max1,x,x*min1});
            
            ans= max(max2,ans);
            
            max1=max2;
            min1=min2;
        }
        return ans;
    }
};