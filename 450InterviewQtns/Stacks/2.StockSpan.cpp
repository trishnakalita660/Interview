//  index of (element - nearest greater to left)

class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int arr[], int n)
    {
       // Your code 
       
       vector<int> index;
       stack<pair<int,int>> st;
       vector<int> ans;
       
       for(int i=0;i<n;i++){
           if(st.size()==0){
               index.push_back(i-(-1));
           }
           
           else if(st.size()>0 && st.top().first > arr[i]){
               index.push_back(i-st.top().second);
           }
           
           else if(st.size()> 0 && st.top().first<=arr[i]){
               while(st.size()> 0 && st.top().first<=arr[i]){
                   st.pop();
               }
               if(st.size()==0){
                   index.push_back(i-(-1));
               }
               else{
                   index.push_back(i-st.top().second);
               }
           }
           st.push({arr[i],i});
       }
       
       return index;
    }
};
