	int find_median(vector<int> v)
		{
		    // Code here.
		    int n= v.size();
		    sort(v.begin(),v.end());
		    
		    return n%2==0? (v[(n-1)/2]+v[n/2])/2 : v[n/2];
		}