/*
Question: Diameter of Binary Tree(Lc 543)
Approach: Recursion
Time Complexity: O(n)
Difficulty: Easy
Concept: Maximum path length between any two nodes
*/

class Solution {
public:
    int helper(TreeNode* root, int& diameter) {
        if (root == NULL)
            return 0;
        int l_d = helper(root->left, diameter);
        int r_d = helper(root->right, diameter);
        diameter = max(diameter, l_d + r_d);
        return 1 + max(l_d, r_d);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        helper(root, diameter);
        return diameter;
    }
};