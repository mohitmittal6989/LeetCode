class Solution {
public:
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {

        vector<vector<int>> graph(n);

        for (auto &edge : invocations) {
            int a = edge[0];
            int b = edge[1];

            graph[a].push_back(b);
        }

        // Find all suspicious methods
        vector<bool> suspicious(n, false);

        queue<int> q;
        q.push(k);
        suspicious[k] = true;

        while (!q.empty()) {

            int node = q.front();
            q.pop();

            for (int next : graph[node]) {

                if (!suspicious[next]) {
                    suspicious[next] = true;
                    q.push(next);
                }
            }
        }

        // Check if a non-suspicious method
        // invokes a suspicious method
        for (auto &edge : invocations) {

            int a = edge[0];
            int b = edge[1];

            if (!suspicious[a] && suspicious[b]) {

                // Cannot remove anything
                vector<int> ans;

                for (int i = 0; i < n; i++)
                    ans.push_back(i);

                return ans;
            }
        }

        // Remove suspicious methods
        vector<int> ans;

        for (int i = 0; i < n; i++) {

            if (!suspicious[i])
                ans.push_back(i);
        }

        return ans;
    }
};