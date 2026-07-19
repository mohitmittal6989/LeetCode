class Solution {
public:
    bool isIsomorphic(string s, string t) {
        


        int n = s.size();
        int a = t.size();

        if(n!=a) return false;

        map<char, char> m;
        set<char> se;


        for(int i=0; i<n; i++){
            if(m.find(s[i])!=m.end()){
                if(m[s[i]] != t[i]) return false;
            }else{
                if(se.find(t[i]) != se.end()) return false;
                m[s[i]] = t[i];
                se.insert(t[i]);
            }
        }

        return true;
    }
};