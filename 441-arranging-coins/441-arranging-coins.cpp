class Solution {
public:
    int arrangeCoins(int n) {
        int a=0,c=0;
        while(n>=a)
        {
            a=a+1;
            
            if(n>=a)
            c++;
             n=n-a;           
        }
        return c;
    }
};