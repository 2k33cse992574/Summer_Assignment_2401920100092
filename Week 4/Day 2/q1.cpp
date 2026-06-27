/*
Question: Binary Tree Inorder Traversal(LC 94)
Approach: Morris Traversal
Time Complexity: O(n)
Difficulty: Easy
Concept: Binary Tree, Inorder Traversal, Morris Traversal
*/

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        TreeNode* curr = root;
        while (curr != NULL) {
            if (curr->left == NULL) {
                ans.push_back(curr->val);
                curr = curr->right;
            } else {
                TreeNode* IP = curr->left;
                while (IP->right != NULL && IP->right != curr) {
                    IP = IP->right;
                }
                if (IP->right == NULL) {
                    
                    IP->right = curr;
                    curr = curr->left;
                } else {
                    ans.push_back(curr->val);
                    IP->right = NULL;
                    curr = curr->right;
                }
            }
        }
        return ans;
    }
};