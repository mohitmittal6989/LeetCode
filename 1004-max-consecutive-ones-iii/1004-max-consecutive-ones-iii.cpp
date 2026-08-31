class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int len = 0;
        int i =0, j=0;
        int zero_cnt = 0;

        while(j<nums.size()){
            if(nums[j] == 0) zero_cnt++;

            while(zero_cnt > k){
                if(nums[i]  == 0) zero_cnt--;
                i++;
            }
            len = max(len, j-i+1);
            j++;
        }

        return len;
    }
};