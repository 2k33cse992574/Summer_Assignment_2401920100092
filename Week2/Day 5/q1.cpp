/*`
Question: Group Anagrams(LC 49)
Approach: Hashing
Time Complexity: O(n * k log k) 
Difficulty: Medium
Concept: Hashing
*/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> ans;
        for (int i = 0; i < strs.size(); i++) {
            string k = strs[i];
            sort(k.begin(), k.end());
            mp[k].push_back(strs[i]);
        }
        for (auto& it : mp) {
            ans.push_back(it.second);
        }
        return ans;
    }
};