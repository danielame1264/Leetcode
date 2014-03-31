ass Solution {
public:
    int numTrees(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        int total=0;
        for(int i=1; i<=n; i++){ // for each one as root
            // left posiiblities and right possiblities
            int left= i-1;
            int right=n-i;
            
           // if(right=0) total += numTrees(left);
            //else if(left =0) total += numTrees(right);
             if (left == 0 || right ==0 ) total+= max(numTrees(left),numTrees(right)) ;

            //else if (left == 1) total += numTrees(right);
            else  total += numTrees(right) * numTrees(left);
        }
        return total;
    }
};
