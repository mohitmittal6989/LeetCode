class Solution {
public:


    int upper(vector<int> &nums, int target, int low, int high) {
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                ans = mid;
                low = mid + 1;    
            }
            else if (nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return ans;
    }

    int lower(vector<int> &nums, int target, int low, int high){
        int ans = -1;
        while(low<=high){
            int mid = (low+high)/2;
            

            if(nums[mid] == target){
                ans = mid;
                high = mid-1;
            }
            else if(nums[mid]< target) low = mid+1;
            else high = mid-1;
        }

        return ans;
    }


    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0, high = nums.size()-1;

        int first = lower(nums, target, low, high);
        int last = upper(nums, target, low, high);

        return {first, last};
    }


    
};