class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int xrr = 0;

        for(int i=0; i<nums.size(); i++){
            xrr = xrr^nums[i];
        }
        return xrr;
    }
};