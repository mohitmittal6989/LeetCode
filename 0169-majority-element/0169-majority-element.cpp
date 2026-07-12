class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> m;
        for(int i=0; i<nums.size(); i++){
            
            if(m.find(nums[i])!=m.end()) m[nums[i]]++;
            else m[nums[i]] =1;
        }

        int n = nums.size();
        for(auto k:m){
            if(k.second > (int)(n/2)) return k.first;
        }
        return -1;
    }
};