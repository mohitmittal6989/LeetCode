class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size() -1 ;
        int maximum= INT_MIN ;
        int currSum = 0 ;
        for(int i=0 ; i<=n ; i++){
            currSum += nums[i] ;
            maximum = max(currSum , maximum) ;
            if(currSum<0){
                currSum =0 ;
            }
        }
    return maximum ;
    }
};