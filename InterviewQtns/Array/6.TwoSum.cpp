class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     vector<int> ans;
     unordered_map<int, pair<int,bool>> map;
        
        for(int i=0;i<nums.size();i++){
            int x = nums[i];
            if(map.find(target-x)!=map.end()){
                ans.push_back(i);
                ans.push_back(map[target-x].first);
            }
            
            map[nums[i]]= {i,true};
        }
       return ans;
    }
};
