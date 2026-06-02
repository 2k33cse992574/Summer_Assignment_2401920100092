/*
Approach: Sliding Window
Difficulty: Easy
Concept: Fixed size sliding window.
*/

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double sum = 0;
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }
        double max_sum = sum;
        for (int i = k; i < n; i++) {
            sum = sum - nums[i - k] + nums[i];
            max_sum = max(max_sum, sum);
        }
        return (max_sum / k);
    }
};