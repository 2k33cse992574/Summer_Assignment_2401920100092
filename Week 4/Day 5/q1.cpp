/*
Question: Symmetric Tree(Lc 101)
Approach: Recursion
Time Complexity: O(n)
Difficulty: Easy
Concept: Check if a binary tree is a mirror of itself
*/

class Solution {
public:
    bool isMirror(TreeNode* left, TreeNode* right) {
        if (!left && !right)
            return true;
        if (!left || !right)
            return false;
        return (left->val == right->val) &&
               isMirror(left->left, right->right) &&
               isMirror(left->right, right->left);
    }
    bool isSymmetric(TreeNode* root) {
        if (!root)
            return true;
        return isMirror(root->left, root->right);
    }
};