class Solution {
public:
    int trap(vector<int>& height) {
      int n= height.size();
        if(n==0 || n==1){
            return 0;
        }
        int mxl[n] ,mxr[n], water[n];
        
        mxl[0] = height[0];
        mxr[n-1] = height[n-1];
        
        for(int i=1;i<n;i++){
            mxl[i] = max(mxl[i-1],height[i]);
        }
        
        for(int i=n-2;i>=0;i--){
            mxr[i] = max(mxr[i+1],height[i]);
        }
        
        for(int i=0;i<n;i++){
            water[i] = min(mxl[i],mxr[i])-height[i];
        }
        int ans=0;
       for(int i=0;i<n;i++){
            ans+=water[i];
        }
        return ans;
    }
};