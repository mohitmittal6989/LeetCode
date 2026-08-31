class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        if(s1.size() > s2.size())
            return false;

        int freq1[26] = {};
        int freq2[26] = {};

        // s1 ki frequency
        for(char c : s1) {
            freq1[c - 'a']++;
        }

        int i = 0, j = 0;

        while(j < s2.size()) {

            // current window mein character add
            freq2[s2[j] - 'a']++;

            // window size s1 se badi ho gayi
            if(j - i + 1 > s1.size()) {
                freq2[s2[i] - 'a']--;
                i++;
            }

            // same frequency => permutation mil gayi
            if(j - i + 1 == s1.size()) {

                bool same = true;

                for(int k = 0; k < 26; k++) {
                    if(freq1[k] != freq2[k]) {
                        same = false;
                        break;
                    }
                }

                if(same)
                    return true;
            }

            j++;
        }

        return false;
    }
};