class Solution {
public:   // fuck ! it's a fib 
    int climbStairs(int n) {
    if(n==0)  return 1;
    else if(n==1) return 1;
    else{
        vector<int> s (n,0);
        s[0]=1;
        s[1]=1;
        for(int i=2; i<n;++i){
            s[i]=s[i-1]+s[i-2];
        }
        return s[n-1]+s[n-2];
    }
    }
    
    
};
