void helper(vector<int>&arr,vector<int>v,vector<vector<int>>&ans){

    if(v.size()==arr.size()){
        ans.push_back(v);
        return;
    }
    for(int i=0;i<arr.size();i++){

        if(arr[i]!=INT_MIN){
            v.push_back(arr[i]);
            int a=arr[i];
           arr[i]=INT_MIN;
            helper(arr,v,ans);
            arr[i]=a;
            v.pop_back();
        }
    }
}
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>v;
        helper(nums,v,ans);
        return ans;
    }
};