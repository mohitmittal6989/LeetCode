class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len=0;

        int i=0, j=0;

        unordered_set<int> st;

        while(j<s.size()){

            while(st.find(s[j] )!= st.end()){
                st.erase(s[i]);
                i++;
            }

            st.insert(s[j]);

            len = max(len, j-i+1);
            j++;
        }

        return len;


    }
};