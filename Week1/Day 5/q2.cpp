/*
Question: Reverse String(LC 344)
Approach: Two Pointers
Time Complexity: O(n)
Difficulty: Easy
Concept: Two Pointers, String
*/

class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int i = 0;
        int j = n - 1;
        while (i <= j) {
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }
};