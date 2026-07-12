class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int buy = arr[0];
        int profit = 0;
        for(int i=1; i<arr.size(); i++){
            // if(arr[i] < buy) buy = arr[i];

            //else if(arr[i] > buy) profit = max(profit,arr[i]-buy);

            profit = max(profit, arr[i]-buy);
            buy = min(buy,arr[i]);
        }

        return profit;

    }
};