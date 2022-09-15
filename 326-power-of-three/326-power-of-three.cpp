class Solution {
public:
    bool isPowerOfThree(int n) {
        double a = n;
        while(a>3)
        {
            a/=3;
        }
        if(a == 3 || a == 1)
            return true;
        else 
            return false;
    }
};