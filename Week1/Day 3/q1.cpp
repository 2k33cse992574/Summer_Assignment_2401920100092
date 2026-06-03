/*
Question: Move Zeroes(LC 283)
Approach: Two Pointers
Difficulty: Easy
Concept: Swap zero with next non zero elements
Time Complexity: O(n)
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0, j = 0;
        int n = nums.size();
        while (j < n && i < n) {
            while (i < n && nums[i] != 0) {
                i++;
            }
            j = max(j, i + 1);
            while (j < n && nums[j] == 0) {
                j++;
            }
            if (i < n && j < n)
                swap(nums[i], nums[j]);
        }
    }
};