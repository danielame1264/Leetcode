class Solution {
public:
    int reverse(int x) {
        bool neg = false;
       if(x<0) {
           x=-x;
           neg =true;
           }
    int result=0;
    while(x>0){
        result=result*10+x%10;
        x=x/10;
    }
    if(result<0) return -1;
    if(neg) return (-1*result);
    else return result;
    }        
};
