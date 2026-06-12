/*  
Question: String Compression(LC 443)
Approach: Two Pointers
Time Complexity: O(n)
Difficulty: Medium
Concept: Two Pointers, String Manipulation
*/

class Solution {
public:
    int compress(vector<char>& chars) {
        int j = 0;
        int count = 1;
        char c;
        for (int i = 1; i <= chars.size(); i++) {
            if (i < chars.size() && chars[i] == chars[i - 1]) {
                count++;
            } else {
                chars[j++] = chars[i - 1];
                if (count != 1) {
                    string k = to_string(count);
                    int a = 0;
                    while (a < k.size()) {
                        chars[j++] = k[a];
                        a++;
                    }
                }
                count = 1;
            }
        }

        return j;
    }
};