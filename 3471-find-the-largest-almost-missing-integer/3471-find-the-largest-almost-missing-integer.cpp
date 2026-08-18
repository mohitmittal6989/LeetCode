class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int n = nums.size();

        for (int i = 0; i <= n - k; i++) {
            unordered_set<int> st;

            // Current window of size k
            for (int j = i; j < i + k; j++) {
                st.insert(nums[j]);
            }

            // Count this number in this window only once
            for (int x : st) {
                mp[x]++;
            }
        }

        int ans = -1;

        for (auto [num, count] : mp) {
            if (count == 1) {
                ans = max(ans, num);
            }
        }

        return ans;
    }
};