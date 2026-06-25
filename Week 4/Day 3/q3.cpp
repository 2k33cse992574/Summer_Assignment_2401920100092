/*
Question: Lowest Common Ancestor of a Binary Search Tree(LC 235)
Approach: Iteration
Time Complexity: O(h) where h is the height of the tree
Difficulty: Easy
Concepts: Binary Search Tree, Iteration
*/

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* curr = root;
        while (curr != NULL) {
            if (curr->val > p->val && curr->val > q->val) {
                curr = curr->left;
            } else if (curr->val < p->val && curr->val < q->val) {
                curr = curr->right;
            } else {
                return curr;
            }
        }
        return NULL;
    }
};