class Solution {
public:
    int subtractProductAndSum(int n) {
        int digit=0,product=1,sum=0;
        while(n!=0)
        {
            digit=n%10;
            product*=digit;
            sum=sum+digit;
            n=n/10;
        }
        int diff=product-sum;
        return diff;
        
    }
};