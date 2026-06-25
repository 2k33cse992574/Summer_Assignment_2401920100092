/*
Question: Validate Binary Search Tree(LC 98)
Approach: Recursion
Time Complexity: O(n) where n is the number of nodes in the tree
Difficulty: Medium
Concepts: Binary Search Tree, Recursion
*/

class Solution {
public:
    bool check(TreeNode* root, long long min, long long max) {
        if (!root) {
            return true;
        }
        if (!(root->val > min && root->val < max)) {
            return false;
        }
        if (check(root->left, min, root->val) &&
            check(root->right, root->val, max)) {
            return true;
        }
        return false;
    }
    bool isValidBST(TreeNode* root) {
        return check(root, LLONG_MIN, LLONG_MAX);
    }
};