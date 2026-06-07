/*
Question: First Unique Character in a String(LC 387)
Approach: Two-pass traversal
Time Complexity: O(n)
Difficulty: Easy
Concept: Frequency tracking
*/

class Solution {
public:
    int firstUniqChar(string s) {
        int arr[26];
        for (int i = 0; i < s.size(); i++) {
            arr[s[i] - 'a']++;
        }
        for (int j = 0; j < s.size(); j++) {
            if (arr[s[j] - 'a'] == 1)
                return j;
        }
        return -1;
    }
};