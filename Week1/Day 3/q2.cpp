/* 
Ques: Squares of a Sorted Array(LC 977)
Approach: Two Pointers
Difficulty: Easy
Concept: place the larger square at the back of the result array, and move inward
Time Complexity: O(N)
*/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res(nums.size(), 0);
        int l = 0, r = nums.size() - 1;
        int n = nums.size() - 1;
        while (n >= 0) {
            if (abs(nums[l]) >= abs(nums[r])) {
                res[n] = nums[l] * nums[l];
                l++;
            } else {
                res[n] = nums[r] * nums[r];
                r--;
            }
            n--;
        }
        return res;
    }
};