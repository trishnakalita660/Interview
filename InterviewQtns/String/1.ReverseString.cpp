class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int i = 0,e = s.size()-1;
        
        while(i < e){
            
            s[i] = s[i]^s[e];
            s[e] = s[i]^s[e];
            s[i] = s[i]^s[e];
            i++;
            e--;
            
        }
        
    }
};

// class Solution {
// public:
//     void reverseString(vector<char>& s) {
//        reverse(s.begin(),s.end());
//     }
// };