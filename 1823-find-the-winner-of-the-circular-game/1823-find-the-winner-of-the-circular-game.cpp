class Solution {
public:
    int winner(vector<int>v,int n,int k,int i){
       
        //base case
        if(n==1)
            return v[0];
      //sub-problem:Remove the current pointed element and repeat
        int x=(i+k-1)%n;
        v.erase(v.begin() + x);
        
     //bigger-problem:recursive call
          return  winner(v,n-1,k,x);
    }
    
    int findTheWinner(int n, int k) {
        vector<int>v(n);
        for(int i=0;i<n;i++){
            v[i]=i+1;
        }
        return winner(v,n,k,0);

    }
};