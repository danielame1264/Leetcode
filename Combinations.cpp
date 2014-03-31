class Solution {
public:
    vector<vector<int> > combine(int n, int k) {
        vector<vector<int> > res;
        vector<int> sol;
        
        if(n==0 || k==0) return res;
        
        findCom(n, k, 1, res, sol);
        
        return res;
        
    }
    
    void findCom(int n, int k, int pos, vector<vector<int> > &res, vector<int> &sol){
        if(sol.size()==k){
            res.push_back(sol);
            return;
        }
        else{
            for(int i=pos; i<=n ;i++){
                sol.push_back(i);
                findCom( n,  k,  i+1, res, sol);
                sol.pop_back();
            }
        }
    }
};
