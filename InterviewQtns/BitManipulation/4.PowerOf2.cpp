//  All power of 2 has 1 bitset
// Another solution is to keep dividing the number by two, i.e, do n = n/2 iteratively.
//  In any iteration, if n%2 becomes non-zero and n is not 1 then n is not a power of 2. 
// If n becomes 1 then it is a power of 2. 

class Solution{
    public:
    // Function to check if given number n is a power of two.
//     SOLUTION LOGIC
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// If we subtract a power of 2 numbers by 1 then all unset bits after the only set bit become set; and the set bit becomes unset.
// For example for 4 ( 100) and 16(10000), we get the following after subtracting 1 
// 3 –> 011 
// 15 –> 01111

// So, if a number n is a power of 2 then bitwise & of n and n-1 will be zero.
// We can say n is a power of 2 or not based on the value of n&(n-1).
// The expression n&(n-1) will not work when n is 0.
// To handle this case also, our expression will become n& (!n&(n-1))
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
   
    bool isPowerofTwo(long long x){
        
        // Your code here  
        return x &&(!(x&(x-1)));
        
    }
};
