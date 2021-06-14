 int eggDrop(int n, int k) 
    {
        // your code here
        int egg[k+1][n+1];
       
       for(int i=0;i<=n;i++){
           egg[0][i]=0;
           egg[1][i] =1;
       }
       for(int i=2;i<=k;i++){
           egg[i][1]=i;
       }
       
       for(int i=2;i<=k;i++){
           for(int j=2;j<=n;j++){
               egg[i][j]= INT_MAX;
               for(int x=1;x<=i;x++){
                   egg[i][j] = min(egg[i][j], 1+max(egg[x-1][j-1], egg[i-x][j]));
               }
           }
       }
       return egg[k][n];
    }