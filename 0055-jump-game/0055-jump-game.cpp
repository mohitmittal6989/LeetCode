class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxJumps= 0;

        int n= nums.size();

        for(int i=0; i<n; i++){
            if(i > maxJumps) return false;
            maxJumps = max(maxJumps, nums[i]+i);
        }

        return true;
        
    }
};