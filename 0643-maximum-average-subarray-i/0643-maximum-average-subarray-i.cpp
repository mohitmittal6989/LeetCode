class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        double maxSum = 0;

        for(int i = 0; i<=k-1; i++){
            sum += nums[i];
        }

        maxSum = sum;

        for(int i=1; i<=nums.size()-k; i++){
            sum -= nums[i-1];
            sum+=nums[i+k-1];

            maxSum = max(maxSum, sum);
        }
        
        return maxSum/k;
    }
};