class Solution {
public:
    vector<string> ans;

    void backtrack(string &digits, vector<string> &mp, int idx, string &curr) {
        if (idx == digits.size()) {
            ans.push_back(curr);
            return;
        }

        string letters = mp[digits[idx] - '0'];

        for (char ch : letters) {
            curr.push_back(ch);
            backtrack(digits, mp, idx + 1, curr);
            curr.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};

        vector<string> mp = {
            "", "", "abc", "def", "ghi",
            "jkl", "mno", "pqrs", "tuv", "wxyz"
        };

        string curr = "";
        backtrack(digits, mp, 0, curr);

        return ans;
    }
};