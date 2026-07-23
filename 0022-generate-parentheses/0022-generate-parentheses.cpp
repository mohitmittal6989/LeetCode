class Solution {
public:
bool isValid(string s) {
    int balance = 0;
    for (char ch : s) {
        if (ch == '(') balance++;
        else balance--;
        if (balance < 0) return false;
    }
    return balance == 0;
}
    vector<string> generateParenthesis(int m) {
        vector<string> result;
    string s(2 * m, ' ');
    for (int i = 0; i < (1 << (2 * m)); ++i) {
        for (int j = 0; j < 2 * m; ++j) {
            s[j] = ((i & (1 << (2 * m - j - 1))) != 0) ? ')' : '(';
        }
        if (isValid(s)) {
            result.push_back(s);
        }
    }
    return result;
    }
};