class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.size()==0)
            return 0;
        sort(points.begin(),points.end());
        int comp=points[0][1];
        int ans=1;
        for(int i=1;i<points.size();i++)
        {
            if(points[i][0]<=comp)
            {
                comp=min(comp,points[i][1]);
            }
            else
            {
                ans++;
                comp=points[i][1];
            }
        }
        return ans;
    }
};
