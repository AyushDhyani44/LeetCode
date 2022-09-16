class Solution {
public:
    int addDigits(int num) 
    {  
         int i,sum,digit;
         while(num>9)
          {  sum=0;
//                 for(i=num;i>0;i=i/10)
//             {
//               digit=i%10;
//               sum=sum + digit;
             
//             }
             while(num>0)
             {
                 int digit=num%10;
                 sum=sum+digit;
                 num=num/10;
             }
            num=sum;
    }
        return num;
    }
};