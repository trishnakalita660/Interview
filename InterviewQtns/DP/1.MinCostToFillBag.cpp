int minimumCost(int a[], int n, int w) 
	{ 
        // Your code goes here
   int dp[w + 1];
    dp[0] = 0;
    for (int i = 1; i <= w; i++)
        dp[i] = INT_MAX;
    for (int i = 1; i <= w; i++) {
        for (int j = 0; j < n; j++) {
            if (a[j] != -1 && (j + 1) <= i && dp[i - (j + 1)] != INT_MAX && dp[i - (j + 1)] + a[j] < dp[i]) {
                dp[i] = dp[i - (j + 1)] + a[j];
            }
        }
    }

    if (dp[w] == INT_MAX)
        return -1;

    return dp[w];
}