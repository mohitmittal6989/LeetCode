class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> temp;
        

        solve(n,k,1, temp, ans);
        return ans;

    }




    void solve(int n, int k, int start, vector<int> &temp, vector<vector<int>> &ans){

        if(k==0){
            ans.push_back(temp);
            //temp.pop_back();
            return;
        }

        cout<<temp.size()<<endl;
        for(int i=start; i<=n; i++){
            temp.push_back(i);
            solve(n,k-1,i+1, temp, ans);

            temp.pop_back();
        }
    }
};