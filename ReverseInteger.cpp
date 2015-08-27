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

class Solution(object):
    import sys
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        is_neg = (x<0)
        x = -x if is_neg else x
        char_list = list(str(x))[::-1]
        i=0
        while (i<len(char_list)) and (char_list[i] == '0'):
            i+=1
        char_list = char_list[i:]
        if len(char_list) ==0:
            return 0
        else:
            out = -int(''.join(char_list)) if is_neg else int(''.join(char_list))
            return 0 if out > sys.maxint else out
