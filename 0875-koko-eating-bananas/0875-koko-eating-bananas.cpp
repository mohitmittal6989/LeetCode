class Solution {
public:

    long long time_to_eat(vector<int> &piles, int n, int mid){

        long long time = 0;

        for(int i = 0; i < n; i++)
        {
            time += (piles[i] + mid - 1LL) / mid;
        }

        return time;

    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int high = *max_element(piles.begin(), piles.end());

        int low = 1, ans = high;

        while(low<=high){
            int mid= low + (high-low)/2;



            if(time_to_eat(piles, n , mid) <= h){
                ans = mid;
                high = mid-1;
            }

            else low = mid+1;




        }

        return ans;
    }
};