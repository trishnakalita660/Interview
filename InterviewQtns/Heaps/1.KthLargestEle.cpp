//  smallest->> max Heap

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       priority_queue<int,vector<int>, greater<int>> q;
         
        for(int i=0; i<nums.size();i++ ){
            
            q.push(nums[i]);
            if(q.size()>k){
                q.pop();
            }
         
        }

// For priniting kth largest elements
        // vector<int> ans;
	    // while(q.size()){
	        // ans.push_back(q.top());
	        // q.pop();
	    // }
	    // reverse(ans.begin(), ans.end() );
	    // return ans;

        return q.top();  
    }
};