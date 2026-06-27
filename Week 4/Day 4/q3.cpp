/*
Question: Maximum Path Sum(Lc 124)
Approach: Recursion
Time Complexity: O(n)
Difficulty: Hard
Concept: Maximum sum of any non-empty path in the binary tree
*/

class Solution {
public:
    int maxi = INT_MIN;

    int helper(TreeNode* root) {
        if (root == NULL)
            return 0;

        int left = max(0, helper(root->left));
        int right = max(0, helper(root->right));

        maxi = max(maxi, root->val + left + right);

        return root->val + max(left, right);
    }

    int maxPathSum(TreeNode* root) {
        helper(root);
        return maxi;
    }
};