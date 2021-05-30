//ans[]= arr[i] *(index (nearest smallest to right - nearest smallest to left -1) )
//  return max(ans[n])


class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        vector< long long> left;
        vector< long long> right;
        vector< long long> width;
        vector< long long> ans;
        
        stack<pair< long long,int>> st;
        // NSL
        int pseudoIndex = -1;
        
        for(int i=0;i<n;i++){
            if(st.size()==0){
                left.push_back(pseudoIndex);
            }
            else if(st.size()>0 && st.top().first< arr[i]){
                left.push_back(st.top().second);
            }
            else if(st.size()>0 && st.top().first>=arr[i]){
                while (st.size()>0 && st.top().first>=arr[i]){
                    st.pop();
                }
                if(st.size()==0){
                    left.push_back(pseudoIndex);
                }
                else{
                    left.push_back(st.top().second);
                }
            }
            st.push({arr[i],i});
        }
        
        while(!st.empty()){
            st.pop();
        }
        
        // NSR
          pseudoIndex = n;
        
        for(int i=n-1;i>=0;i--){
            if(st.size()==0){
                right.push_back(pseudoIndex);
            }
            else if(st.size()>0 && st.top().first< arr[i]){
                right.push_back(st.top().second);
            }
            else if(st.size()>0 && st.top().first>=arr[i]){
                while (st.size()>0 && st.top().first>=arr[i]){
                    st.pop();
                }
                if(st.size()==0){
                    right.push_back(pseudoIndex);
                }
                else{
                    right.push_back(st.top().second);
                }
            }
            st.push({arr[i],i});
        }
        
        
        reverse(right.begin(),right.end());
       for(int i=0;i<n;i++){
           width.push_back(abs(right[i]-left[i]-1));
       }
    
       long long maxm= INT_MIN;
         for(int i=0;i<n;i++){
         maxm= max((width[i]*arr[i]), maxm);
       }
        return maxm;
    }
};
