class Solution {
public:
    string convertToBase7(int num) {
        int n;
        if(num==0)
            return "0";
        if(num>0)
            n=num;
        else
            n=num*-1; 
        int d;
        string str;
        while(n!=0)
        {
            d=n%7;
            str+=to_string(d);
            n=n/7;
        }
        reverse(str.begin(),str.end());
        if(num<0)
            str.insert(str.begin(),'-');
        return str;
        
    }
};