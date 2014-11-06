class Solution {
public:
    // vector<vector<int> >result;
    vector<vector<int> > permute(vector<int> &num) {
      vector<vector<int> >result;
      int end=num.size()-1;
      perm(num,result,0,end);
     return result;
    
    }
    
    void perm(vector<int> &num, vector<vector<int> >&result,
              int nStart, int nEnd){
        if (nStart < nEnd+1){
            for (int i = nStart; i < nEnd+1; ++i){
                swap(num[nStart],num[i]);
                perm(num, result, nStart+1, nEnd);
                swap(num[nStart],num[i]);
            }
        }
        else{
            result.push_back(num);
           // cout<<num[0]<<num[1]<<num[2]<<endl;
        }
        
    }
    
    
};



public class Solution {
    public List<List<Integer>> permute(int[] num) {
        List<List<Integer>> res = new ArrayList<List<Integer>>();
        List<Integer> current = new ArrayList<Integer>();
        
        perm(num,res,current);
        return res;
    }
    
    public void perm(int[] num, List<List<Integer>> res, List<Integer> current){
        if(current.size()==num.length){
            res.add(new ArrayList<Integer>(current));
        } else {
            for(int i=0;i<num.length;i++){
                if(current.contains(num[i])) continue;
                else {
                    current.add(num[i]);
                    perm(num,res,current);
                    current.remove(current.size()-1);
                }
            }
        }
    }
}
