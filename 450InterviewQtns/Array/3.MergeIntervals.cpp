class Solution {
public:
    vector<int>mergeInt(vector<int> a, vector<int>b){
        return {min(a[0],b[0]), max(a[1],b[1])};
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()<=1){ return intervals;}
        
        sort(intervals.begin(), intervals.end());
 
        vector<vector<int>> ans;
        int i=0;
        while(i<intervals.size()){
            if(ans.size()==0){
                if(intervals[i][1]>=intervals[i+1][0]){
                    ans.push_back(mergeInt(intervals[i],intervals[i+1]));
                    i=i+2;
                }
                else{
                    ans.push_back(intervals[i]);
                    i++;
                }
            }
            else {
                int n= ans.size()-1;
                
                if(ans[n][1]>=intervals[i][0]){
                    vector<int> comp = ans[n];
                    ans.pop_back();
                    ans.push_back(mergeInt(comp, intervals[i]));
                }
                else{
                    ans.push_back(intervals[i]);
                }
                i++;
            }
        }
        
        return ans;
    }
};