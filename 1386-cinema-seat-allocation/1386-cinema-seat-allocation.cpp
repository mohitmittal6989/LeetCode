class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        
        unordered_map<int, unordered_set<int>> mp;

        // Store reserved seats row-wise
        for (auto& seat : reservedSeats) {
            mp[seat[0]].insert(seat[1]);
        }

        // Rows with no reserved seats
        int ans = (n - mp.size()) * 2;

        for (auto& [row, reserved] : mp) {

            bool left = true;
            bool middle = true;
            bool right = true;

            // Check seats 2,3,4,5
            for (int seat = 2; seat <= 5; seat++) {
                if (reserved.count(seat)) {
                    left = false;
                    break;
                }
            }

            // Check seats 4,5,6,7
            for (int seat = 4; seat <= 7; seat++) {
                if (reserved.count(seat)) {
                    middle = false;
                    break;
                }
            }

            // Check seats 6,7,8,9
            for (int seat = 6; seat <= 9; seat++) {
                if (reserved.count(seat)) {
                    right = false;
                    break;
                }
            }

            if (left && right) {
                ans += 2;
            }
            else if (left || middle || right) {
                ans += 1;
            }
        }

        return ans;
    }
};