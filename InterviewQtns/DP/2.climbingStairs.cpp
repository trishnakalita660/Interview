// You are climbing a staircase. It takes n steps to reach the top.

// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

 
 int climb(int n){
     int i=1, j=1;
     n--;
     while(n>0){
         j=i+j;
         i=j-i;
         n--;
     }
     return j;
 }