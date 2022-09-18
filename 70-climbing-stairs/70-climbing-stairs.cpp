class Solution {
public:
    int climbStairs(int n) {
        if(n==1)
            return 1;
        else if(n==0)
            return 0;
        else
        {
        int prev=1;
       int next=1;
        int sum=0;
        for(int i=2;i<=n;i++)
        {sum=prev+next;
         prev=next;
         next=sum;
            
        }
        return sum;
    }
    }
};