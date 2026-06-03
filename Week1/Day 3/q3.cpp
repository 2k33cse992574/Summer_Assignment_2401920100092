/* 
Question: Container With Most Water(LC 11)
Approach: Two Pointers
Difficulty: Medium
Concept: Move the pointer with smaller height inward to potentially find a larger area
Time Complexity: O(N)
*/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area = 0;
        int n = height.size();
        int i = 0, j = n - 1;
        while (i <= j) {
            int mini = min(height[i], height[j]);
            max_area = max(max_area, mini * (j - i));
            if (mini == height[i])
                i++;
            else
                j--;
        }
        return max_area;
    }
};