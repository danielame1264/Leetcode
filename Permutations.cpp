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

class Solution(object):
    import copy
    def permute(self, nums):
        
        if len(nums) == 0: return []
        if len(nums) == 1: return [nums]
        res = []
        for i in range(len(nums)):
            for j in self.permute(nums[:i] + nums[i+1:]):
                res.append([nums[i]] + j)
        return res
    #     """
    #     :type nums: List[int]
    #     :rtype: List[List[int]]
    #     """
    #     res = []
    #     cur = []
    #     self.permuteHelper(nums, res, 0)
    #     return res
    
    # def permuteHelper(self, nums, res, start):
    #     if start<len(nums):
    #         for i in xrange(start, len(nums)):
    #             nums[i], nums[start] = nums[start], nums[i]
    #             self.permuteHelper(nums, res, start+1)
    #             nums[start], nums[i] = nums[i], nums[start]
    #     else:
    #         res.append(copy.deepcopy(nums))
