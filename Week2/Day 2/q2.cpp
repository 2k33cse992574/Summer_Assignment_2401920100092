/*
Question: Permutation in String(LC 567)
Approach: Sliding Window
Time Complexity: O(n)
Difficulty: Medium
Concept: Array frequency matching
*/

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s2.size() < s1.size())
            return false;
        vector<int> si(26, 0), pi(26, 0);
        int left = 0, right = 0;
        while (right < s1.size()) {
            si[s1[right] - 'a']++;
            pi[s2[right] - 'a']++;
            right++;
        }
        right--;
        while (right < s2.size()) {
            if (si == pi)
                return true;
            pi[s2[left] - 'a']--;
            left++;
            right++;
            if (right != s2.size()) {
                pi[s2[right] - 'a']++;
            }
        }
        return false;
    }
};