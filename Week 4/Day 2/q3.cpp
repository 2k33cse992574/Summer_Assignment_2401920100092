/*
Question: Binary Tree Zigzag Level Order Traversal(LC 103)
Approach: BFS
Time Complexity: O(n)
Difficulty: Medium
Concept: Binary Tree, Zigzag Level Order Traversal, BFS
*/

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (!root)
            return ans;
        queue<TreeNode*> q;
        q.push(root);
        bool ltr = true;
        while (!q.empty()) {
            int size = q.size();
            vector<int> t;
            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                t.push_back(node->val);
                q.pop();

                if (node->left) {
                    q.push(node->left);
                }
                if (node->right) {
                    q.push(node->right);
                }
            }
            if (!ltr) {
                reverse(t.begin(), t.end());
            }
            ans.push_back(t);
            ltr = !ltr;
        }
        return ans;
    }
};