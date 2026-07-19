class Solution {
public:
    string frequencySort(string s) {
        string ans = "";
        map<char,int> m;
        int n = s.size();

        for(auto ch:s){
            m[ch]++;
        }


        while(!m.empty()){
            char maxChar;
            int maxFreq = 0;

            for(auto k:m){
                if(k.second > maxFreq){
                    maxFreq = k.second;
                    maxChar = k.first;
                }

               
            }
            ans+=string(maxFreq,maxChar);
            m.erase(maxChar);
                    
        
        }

        return ans;
    }
};