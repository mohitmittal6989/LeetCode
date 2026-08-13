class Solution {
public:

    int bs(vector<int> &nums, int right, int left){
        while (left < right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] > nums[right]) {
                return bs(nums, right, mid+1);//left = mid + 1;
            } else {
                return bs(nums, mid, left);//right = mid;
            }
        }

        return nums[left];
    }
    
    
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        return bs(nums, right, left);
    }
};