class Solution {
public:

    int findDays(vector<int>& weights, int cap){

        int days = 1;
        int load = 0;

        for(int wt : weights){

            if(load + wt > cap){
                days++;
                load = wt;
            }
            else{
                load += wt;
            }
        }

        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int l = *max_element(weights.begin(), weights.end());
        int h = accumulate(weights.begin(), weights.end(), 0);

        while(l<=h){
            int mid = l+(h-l)/2;
            int reqDays = findDays(weights, mid);
            if(reqDays <= days){
                h = mid - 1;
            }
            else{
                l = mid + 1;
            }


        }
        return l;
    }
};