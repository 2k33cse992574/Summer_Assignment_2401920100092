/*
Question: Implement strStr()(LC 28)
Approach: Brute Force
Time Complexity: O(n1 * n2)
Difficulty: Easy
Concept: String
*/

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n1 = needle.size();
        int n2 = haystack.size();
        for (int i = 0; i <= n2 - n1; i++) {
            string check = haystack.substr(i, n1);
            if (check == needle) {
                return i;
            }
        }
        return -1;
    }
};