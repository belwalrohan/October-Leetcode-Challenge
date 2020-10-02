class Solution {
public:
    void solve(vector<int> candidates,int target,int start,vector<vector<int>>& ans,vector<int>& ele)
    {
        if(target==0)
        {
            ans.push_back(ele);
            return;
        }
        for(int i=start;i<candidates.size();i++)
        {
            if(target-candidates[i]<0)
                continue;
            ele.push_back(candidates[i]);
            solve(candidates,target-candidates[i],i,ans,ele);
            ele.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ele;
        solve(candidates,target,0,ans,ele);
        return ans;
    }
};
