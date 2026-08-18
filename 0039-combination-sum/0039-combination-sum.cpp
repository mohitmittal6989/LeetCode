class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int>  temp;

        solve(candidates, target, 0, temp, ans);

        return ans;
    }



    void solve(vector<int> &candidates, int target, int start, vector<int> &temp, vector<vector<int>> &ans){

        if(target<=0){
            if(target==0){
                ans.push_back(temp);
                return;
            }

            return;
        }

        for(int i=start; i<candidates.size(); i++){
            temp.push_back(candidates[i]);

            solve(candidates, target-candidates[i], i, temp, ans);

            temp.pop_back();
        }
    }
};