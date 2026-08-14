// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         set<int> s(nums.begin(), nums.end());

//         int finalLength = 0;

//         for (int k : s) {
            
//             if (s.find(k - 1) == s.end()) {

//                 int length = 1;

//                 while (s.find(k + length) != s.end()) {
//                     length++;
//                 }

//                 finalLength = max(finalLength, length);
//             }
//         }

//         return finalLength;
//     }
// };


class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());

        int longest = 0;

        for (int num : s) {
            // Start only if num is the beginning of a sequence
            if (s.find(num - 1) == s.end()) {
                int length = 1;

                while (s.find(num + length) != s.end()) {
                    length++;
                }

                longest = max(longest, length);
            }
        }

        return longest;
    }
};