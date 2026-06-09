/*
Question: Find All Anagrams in a String(LC 438)
Approach: Sliding Window
Time Complexity: O(n)
Difficulty: Medium
Concept: Array frequency matching
*/

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if (s.size() < p.size())
            return {};
        vector<int> si(26, 0), pi(26, 0);
        int left = 0, right = 0;
        while (right < p.size()) {
            si[s[right] - 'a']++;
            pi[p[right] - 'a']++;
            right++;
        }
        right--;
        vector<int> ans;
        while (right < s.size()) {
            if (si == pi) {
                ans.push_back(left);
            }
            si[s[left] - 'a']--;
            left++;
            right++;
            if (right != s.size()) {
                si[s[right] - 'a']++;
            }
        }
        return ans;
    }
};