/*
Question: Longest Common Prefix(LC 14)
Approach: String Matching
Time Complexity: O(S) where S is the sum of all characters in all strings
Difficulty: Easy
Concept: String
*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string strs1 = strs[0];
        for (int i = 1; i < strs.size(); i++) {
            while (strs[i].find(strs1) != 0) {
                strs1.pop_back();
            }
            if (strs.empty())
                return "";
        }
        return strs1;
    }
};