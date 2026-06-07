/*
Question: Ransom Note(LC 383)
Approach: Frequency matching
Time Complexity: O(n)
Difficulty: Easy
Concept: Character availability
*/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int arr[26];
        for (int i = 0; i < ransomNote.size(); i++) {
            arr[ransomNote[i] - 'a']++;
        }
        for (int i = 0; i < magazine.size(); i++) {
            if (arr[magazine[i] - 'a'] == 0)
                continue;
            arr[magazine[i] - 'a']--;
        }
        for (int i = 0; i < ransomNote.size(); i++) {
            if (arr[ransomNote[i] - 'a'] != 0)
                return false;
        }
        return true;
    }
};