class Solution {
public:
 void solve(vector<int>& candidated, int target , vector<vector<int >>& ans , int index , vector<int>& v) {
        
        if(index == 0 ) return  ;
        
        if(target == 0 ) {
            ans.push_back(v);
            return ;
        }
        if(candidated[index-1] <= target) {
            
            v.push_back(candidated[index-1]);
                       solve(candidated , target-candidated[index-1] , ans , index ,v);
            v.pop_back();
                        solve(candidated , target, ans , index-1 ,v); 
        }
            else {
                 solve(candidated , target , ans , index-1,v);
        }
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int >> ans; 
        vector<int> v;
        solve(candidates , target , ans , candidates.size() , v);
        return ans ; 
    
        
    }
};