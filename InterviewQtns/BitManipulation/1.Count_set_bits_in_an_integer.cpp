   class Solution{
       public:
       int setBits(int N) {
        // Write Your Code here
        if(N == 0){
            return 0;
        }
       int counter =0;
        while(N){
            if(N%2 == 1){
                counter++;
            }
            N= N/2;
        }
        return counter;
    }   
};