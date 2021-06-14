
	int maxSubstring(string S)
	{
	    // Your code goes here
	    if(S.length()==0){
	        return 0;
	    }
	    int sum=0,max_sum=INT_MIN;
	    for(auto x: S){
	        int m= x=='0'?1:-1;
	        sum+=m;
	        max_sum= max(max_sum,sum);
	        
	        if(sum<0) sum=0;
	    }
	    return max_sum;
	    	}