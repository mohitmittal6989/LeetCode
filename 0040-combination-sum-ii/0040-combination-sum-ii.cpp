class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;

        vector<int> temp;


        solve(candidates, target, 0, temp, ans);

        return ans;
    }



    void solve(vector<int> &candidates, int target, int start, vector<int> &temp, vector<vector<int>> &ans){

        if(target<=0){
            if(target==0){
                // if(find(ans.begin(), ans.end(), temp)==ans.end()) ans.push_back(temp);
                ans.push_back(temp);
                return;
            }

            return;
        }

        for(int i=start; i<candidates.size(); i++){

            if(i>start && candidates[i] == candidates[i-1]) continue;

            if(candidates[i] > target) break;

            temp.push_back(candidates[i]);

            solve(candidates, target-candidates[i], i+1, temp, ans);

            temp.pop_back();
        }
    }
};