/*
Question: Valid Palindrome(LC 125)
Approach: Two Pointer
Time Complexity: O(n)   
Difficulty: Easy
Concept: String, Two Pointer
*/

class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        string check = "";
        for (int i = 0; i < n; i++) {
            if ((s[i] < 'A' || s[i] > 'Z') && (s[i] < 'a' || s[i] > 'z') &&
                (s[i] < '0' || s[i] > '9')) {
                continue;
            }
            check += tolower(s[i]);
        }
        n = check.size();
        int i = 0, j = n - 1;
        while (i <= j) {
            if (check[i] != check[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};