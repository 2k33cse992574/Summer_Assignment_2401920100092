/*
Question: Path Sum(Lc 112)
Approach: Recursion
Time Complexity: O(n)
Difficulty: Easy
Concept: root to leaf path sum
*/

class Solution {
public:
    bool Leaf(TreeNode* root) {
        return (root && !(root->left) && !(root->right));
    }
    bool helper(TreeNode* root, int& targetSum, int sum) {
        if (Leaf(root)) {
            sum = sum + root->val;
            if (sum == targetSum)
                return true;
            else
                return false;
        }
        if (!root)
            return false;
        sum = sum + root->val;
        return helper(root->left, targetSum, sum) ||
               helper(root->right, targetSum, sum);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (!root)
            return false;
        int sum = 0;
        return helper(root, targetSum, sum);
    }
};