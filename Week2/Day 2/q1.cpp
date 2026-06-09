/*
Question: Longest Substring Without Repeating Characters(LC 3)
Approach: Two pointers
Time Complexity: O(n)
Difficulty: Medium
Concept: Sliding Window
*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int i = 0, j = 0;
        int maxi = 0;
        unordered_map<char, int> mp;
        while (i < n && j < n && i <= j) {
            if (mp.find(s[j]) != mp.end()) {
                i = max(i, mp[s[j]] + 1);
                mp.erase(s[j]);
            } else {
                mp[s[j]] = j;
                maxi = max(maxi, j - i + 1);
                j++;
            }
        }
        return maxi;
    }
};