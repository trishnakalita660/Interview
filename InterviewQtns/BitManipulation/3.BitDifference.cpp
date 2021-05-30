// bitset Xor of the two numbers will have the number of bits
// to be flipped for converting a to b

class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        
        // Your logic here
        
        
        int m=a^b,counter=0;
        while(m){
            if(m%2 ==1)
            {counter++;}
            m=m/2;
        }
        return counter;
    }
};