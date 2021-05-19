class Solution {
public:
    vector<vector<int>>result;
    set<vector<int>>pq;
    void helper(int i , vector<int>&nums,int n)
    {
        if(i==n)
        {
            pq.insert(nums);
            return;
        }
        for(int j = i;j<n;j++)
        {    
        swap(nums[j],nums[i]);
        helper(i+1,nums,n);
        swap(nums[j],nums[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int i = 0;
        int n = nums.size();
        helper(i,nums,n);
        for(auto p : pq)
        {
            result.push_back(p);
        }
        return result;
    }
};