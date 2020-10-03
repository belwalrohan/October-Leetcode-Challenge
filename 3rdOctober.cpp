class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        map<int,int> dicti;
        for(int i:nums)
        {
            if(dicti.find(i)==dicti.end())
                dicti[i]=1;
            else
                dicti[i]++;
        }
        int ans=0;
        for(auto i:dicti)
        {
            if(dicti.find(k+i.first)!=dicti.end())
            {
                if(k==0 && dicti[i.first]==1)
                    ans--;
                ans++;
            }
        }
        return ans;
    }
};
