class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<bool> removed(n,false);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i!=j && removed[j]==false)
                {
                    if(intervals[j][0]<=intervals[i][0] && intervals[i][1]<=intervals[j][1])
                    {
                        removed[i]=true;
                        break;
                    }
                }
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(removed[i]==false)
                ans++;
        }
        return ans;
    }
};
