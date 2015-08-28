class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int div = 1;
        while (x / div >= 10) {
         div *= 10;
          }        
    while (x != 0) {
    int l = x / div;
    int r = x % 10;
    if (l != r) return false;
    x = (x % div) / 10;   // chop off two digits from the front and end.
    div /= 100;
  }
  return true;

    }
};

class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        if x<0: return False
        div = 1
        while(x/div>=10):
            div *= 10
            
        while(x!=0):
            left = x/div
            right = x%10
            
            if left != right: return False
            
            x = x%div
            x = x/10
            div = div/100
            
        return True
