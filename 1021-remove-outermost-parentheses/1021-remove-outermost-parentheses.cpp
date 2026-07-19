class Solution {
public:
    string removeOuterParentheses(string s) {
    //     string ans = "";
    //     int open = 0;

    //     for(char c : s){

    //         if(c == '('){
    //             if(open > 0)
    //                 ans += c;

    //             open++;
    //         }
    //         else{
    //             open--;

    //             if(open > 0)
    //                 ans += c;
    //         }
    //     }

    //     return ans;
        string ans = "";
        stack<char> st;

        for(char ch:s){
            if(ch == ')') st.pop();
            if(!st.empty()) ans+=ch;
            if(ch =='(') st.push(ch);
        }

        return ans;

    }


    
};