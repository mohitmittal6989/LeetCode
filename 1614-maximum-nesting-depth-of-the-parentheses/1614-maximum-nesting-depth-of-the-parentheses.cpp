class Solution {
public:
    int maxDepth(string s) {
        // stack<char> st;
        // int ans = 0;

        // for(auto ch : s)
        // {
        //     if(ch == '(')
        //     {
        //         st.push(ch);
        //         ans = max(ans, (int)st.size());
        //     }
        //     else if(ch == ')')
        //     {
        //         st.pop();
        //     }
        // }

        // return ans;

        int depth = 0;
        int cnt = 0;

        for(auto ch :s){
            if(ch == '('){
                depth++;
                cnt = max(cnt, depth) ;
            }
            else if(ch == ')') depth--;
        }

        return cnt;
    }
};