#include <bits/stdc++.h>
using namespace std;

  void ans(int a[],int n, int k){
     priority_queue<int, vector<int>, greater<int>> q;
     vector<int>ab;
    
     for(int i=0;i<n;i++){
         q.push(a[i]);
         
         if(q.size()>k){
             ab.push_back(q.top());
             q.pop();
         }
     }
    
     
     while(!q.empty()){
         ab.push_back(q.top());
             q.pop();
     }
      for(auto x: ab){
         cout<<x<<" ";
     }
     
 }

int main() {
	//code
	
	int T;
	cin>>T;
	while(T--){
	    int n,k;
	    cin>>n;
	    cin>>k;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    
	   
	   ans(a,n,k) ;
	    cout<<endl;
	}
	return 0;
}