// Input: 
// N = 7, price[] = [100 80 60 70 60 75 85]
// Output:
// 1 1 1 2 1 4 6
// Explanation:
// Traversing the given input span for 100 
// will be 1, 80 is smaller than 100 so the 
// span is 1, 60 is smaller than 80 so the 
// span is 1, 70 is greater than 60 so the 
// span is 2 and so on. Hence the output will 
// be 1 1 1 2 1 4 6.

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
