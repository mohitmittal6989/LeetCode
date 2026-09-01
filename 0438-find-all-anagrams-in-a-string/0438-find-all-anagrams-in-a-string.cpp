class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;

        int freq1[26] = {};
        int freq2[26] = {};

        for(char c : p) {
            freq1[c - 'a']++;
        }

        int i = 0, j = 0;

        while(j < s.size()) {

            // right wala character add
            freq2[s[j] - 'a']++;

            // window badi ho gayi
            if(j - i + 1 > p.size()) {
                freq2[s[i] - 'a']--;
                i++;
            }

            // window exactly p ki length ki hai
            if(j - i + 1 == p.size()) {

                bool same = true;

                for(int k = 0; k < 26; k++) {
                    if(freq1[k] != freq2[k]) {
                        same = false;
                        break;
                    }
                }

                if(same) {
                    ans.push_back(i);
                }
            }

            j++;
        }

        return ans;
    }
};