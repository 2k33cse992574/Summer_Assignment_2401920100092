/*
Question: Maximum Depth of Binary Tree (LC 104)
Approach: Recursive approach to calculate the maximum depth
Time complexity: O(n)
Difficulty: Easy
Concept: Recursion, Binary Tree
*/

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (!root)
            return 0;
        int lh = maxDepth(root->left);
        int rh = maxDepth(root->right);
        return 1 + max(lh, rh);
    }
};