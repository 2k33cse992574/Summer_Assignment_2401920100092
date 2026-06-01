/*
Approach: Greedy
Time Complexity:O(n)
Concept: Calculate minimum till now an update profit dynamically in one traversal
*/


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mini = prices[0];
        int max_pr = 0;
        for (int i = 1; i < n; i++) {
            max_pr = max(max_pr, prices[i] - mini);
            mini = min(mini, prices[i]);
        }
        return max_pr;
    }
};