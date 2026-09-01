class Solution {
public:
    string minWindow(string s, string t) {
        

        int i=0, j=0;

        unordered_map<char, int> mp;

        for(auto i:t){
            mp[i]++;
        }

        int cnt=0;
        int minLen = INT_MAX;

        int start = 0;

        while(j<s.size()){
            if(mp[s[j]] > 0) cnt++;
            mp[s[j]]--;

            while(cnt == t.size()){
                if(j - i + 1 < minLen) {
                    minLen = j - i + 1;
                    start = i;
                }
                mp[s[i]]++;

                if(mp[s[i]] > 0) {
                    cnt--;
                }

                i++;
            }
            j++;

        }
        if(minLen == INT_MAX)
            return "";

        return s.substr(start, minLen);
    }
};