class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>s;
        map<int,int>mp;
        for(int i=0;i<nums2.size();i++)
        {
            if(s.empty())
                s.push(nums2[i]);
            else if(s.top()>=nums2[i])
                s.push(nums2[i]);
            else if(s.top()<nums2[i])
            {
                while(!s.empty() && s.top()<nums2[i])
                {
                    mp[s.top()]=nums2[i];
                    s.pop();
                }
                s.push(nums2[i]);
            }
        }
        while(!s.empty())
        {
            mp[s.top()]=-1;
            s.pop();
        }
        for(int i=0;i<nums1.size();i++)
            nums1[i]=mp[nums1[i]];
        return nums1;
    }
};