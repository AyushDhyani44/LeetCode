class Solution {
public:
    bool isPowerOfFour(int n) {
        
        double a = n;
        while(a>4)
        {
            a/=4;
        }
        if(a == 4 || a == 1)
            return true;
        else 
            return false;
    }
};