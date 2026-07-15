class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=1, h = *max_element(nums.begin(), nums.end());

        int ans = h;

        while(l<=h){
            int mid = l+(h-l)/2;
            int sum = 0;
            for(int i=0; i<nums.size(); i++){
                int sol = (nums[i] + mid - 1) / mid;
                cout<<sol<<endl;
                sum += sol;  
            }

            if(sum > threshold) l = mid+1;
            if(sum <= threshold){
                ans = min(ans, mid);
                h = mid-1;
            }
        }

        return ans;
    }
};