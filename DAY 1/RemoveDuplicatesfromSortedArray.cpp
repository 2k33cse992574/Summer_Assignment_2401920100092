/*
Approach:Two Pointer
Time Complexity:O(n)
Concept:In-place Modification
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = 1;
        int count = 0;
        while (j < n) {
            if (nums[i] != nums[j]) {
                count++;
                nums[i + 1] = nums[j];
                i++;
            }
            j++;
        }
        return count + 1;
    }
};