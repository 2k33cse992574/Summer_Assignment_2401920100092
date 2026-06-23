/*
Question: Invert Binary Tree (LC 226)
Approach: Recursive approach to invert the binary tree
Time complexity: O(n)
Difficulty: Easy
Concept: Recursion, Binary Tree
*/
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (!root)
            return NULL;
        TreeNode* newleft = invertTree(root->left);
        TreeNode* newRight = invertTree(root->right);
        swap(root->left, root->right);
        return root;
    }
};