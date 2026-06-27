/*
Question: Serialize and Deserialize Binary Tree(Lc 297)
Approach: Level-order Traversal
Time Complexity: O(n)
Difficulty: Hard
Concept: Convert a binary tree to a string and reconstruct it from the string
*/

class Codec {
public:
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        queue<TreeNode*> q;
        string s = "";
        q.push(root);
        while (!q.empty()) {
            TreeNode* temp = q.front();
            q.pop();
            if (!temp)
                s.append("null,");
            else
                s.append(to_string(temp->val) + ",");
            if (temp) {
                q.push(temp->left);
                q.push(temp->right);
            }
        }
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if (data.size() == 0)
            return NULL;
        stringstream s(data);
        string str;
        getline(s, str, ',');
        if (str == "null")
            return NULL;
        TreeNode* root = new TreeNode(stoi(str));
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            TreeNode* node = q.front();
            q.pop();
            getline(s, str, ',');
            if (str == "null") {
                node->left = NULL;
            } else {
                TreeNode* temp = new TreeNode(stoi(str));
                node->left = temp;
                q.push(temp);
            }
            getline(s, str, ',');
            if (str == "null") {
                node->right = NULL;
            } else {
                TreeNode* t = new TreeNode(stoi(str));
                node->right = t;
                q.push(t);
            }
        }
        return root;
    }
};