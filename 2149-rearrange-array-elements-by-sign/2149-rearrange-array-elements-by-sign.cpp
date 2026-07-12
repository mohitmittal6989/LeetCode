class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        vector<int> sol;

        for(auto k: nums){
            if(k > 0) pos.push_back(k);
            else neg.push_back(k);
        }

        int i=0, j=0;

        while(i<pos.size() && j<neg.size()){
            sol.push_back(pos[i]);
            sol.push_back(neg[j]);
            i++;
            j++;
        }

        return sol;
    }
};