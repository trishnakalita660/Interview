class Solution {
public:
    int maximumGap(vector<int>& nums) {
        
        int  ans= INT_MIN;
        if(nums.size()<2){
            return 0;
        }
        else{
            priority_queue<int, vector<int>, greater<int>> q;
            for(int i=0;i<nums.size();i++){
                q.push(nums[i]);
            }
            
            int x = q.top();
            q.pop();
            while(!q.empty()){
                ans = max(ans,abs(x-q.top()));
                x= q.top();
                q.pop();
            }
        }
        return ans;
    }
};