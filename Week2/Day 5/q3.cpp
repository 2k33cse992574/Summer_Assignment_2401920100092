/*  
Question: Longest Palindromic Substring(LC 5)
Approach: Expand Around Centers
Time Complexity: O(n^2)
Difficulty: Medium
Concept: Two Pointers, String Manipulation
*/

class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        string res = "";

        for (int i = 0; i < n; i++) {
            int st = i, end = i;
            while (st >= 0 && end < n && s[st] == s[end]) {
                st--;
                end++;
            }
            string temp = s.substr(st + 1, end - st - 1);
            if (temp.size() > res.size())
                res = temp;

            st = i;
            end = i + 1;
            while (st >= 0 && end < n && s[st] == s[end]) {
                st--;
                end++;
            }
            temp = s.substr(st + 1, end - st - 1);
            if (temp.size() > res.size())
                res = temp;
        }

        return res;
    }
};