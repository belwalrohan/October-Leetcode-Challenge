class Solution {
public:
    int houserobber(vector<int> nums)
    {
        if(nums.size()==0)
            return 0;
        int n=nums.size();
        int f[n],i=2;
        if(n==1)
            return nums[0];
        f[0]=nums[0];
        f[1]=max(nums[0],nums[1]);
        while(i<n)
        {
            f[i]=max(f[i-2]+nums[i],f[i-1]);
            i++;
        }
        return f[n-1];
    }
    int rob(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int n=nums.size();
        if(n==1)
            return nums[0];
        return(max(houserobber(vector<int>(nums.begin(),nums.end()-1)),houserobber(vector<int>(nums.begin()+1,nums.end()))));
    }
};
