/*
Question: Construct Binary Tree from Preorder and Inorder Traversal(Lc 105)
Approach: Recursion
Time Complexity: O(n)
Difficulty: Medium
Concept: Reconstruct a binary tree from its preorder and inorder traversals
*/

class Solution {
public:
    int search(vector<int>& inorder, int x) {
        for (int i = 0; i < inorder.size(); i++) {
            if (inorder[i] == x)
                return i;
        }
        return -1;
    }
    TreeNode* helper(vector<int>& preorder, vector<int>& inorder, int& i,
                     int left, int right) {
        if (left > right)
            return NULL;
        if (i >= preorder.size())
            return NULL;
        TreeNode* newRoot = new TreeNode(preorder[i]);
        int idx = search(inorder, preorder[i]);
        i++;
        newRoot->left = helper(preorder, inorder, i, left, idx - 1);
        newRoot->right = helper(preorder, inorder, i, idx + 1, right);
        return newRoot;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int j = inorder.size() - 1;
        int i = 0;
        return helper(preorder, inorder, i, 0, j);
    }
};