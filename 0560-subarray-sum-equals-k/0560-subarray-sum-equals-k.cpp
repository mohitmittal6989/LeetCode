class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    //  int ans = 0;

    //  for(int i=0; i<nums.size(); i++){
    //     int sum = 0;

    //     for(int j=i; j<nums.size(); j++){
    //         sum+=nums[j];
    //         if(sum == k) ans+=1;

    //     }

    //  }   

    //  return ans;


    map<int,int> m;
    m[0] = 1;
    int count=0;
    int sum=0;
    for(int i=0; i<nums.size();i++){
        sum+=nums[i];
        int rem = sum-k;
        // if(sum == k) count++;

        if(m.find(rem)!=m.end()) count += m[rem];

        m[sum]++;
    }
    return count;







    }
};