/*
Question: Repeated Substring Pattern (LC 459)
Approach: KMP Algorithm
Time Complexity: O(n)
Difficulty: Easy
Concept: String manipulation, KMP algorithm
*/

class Solution
{
public:
    vector<int> buildLPS(string s)
    {
        int n = s.size();
        vector<int> lps(n, 0);
        int len = 0;
        int i = 1;
        while (i < n)
        {

            if (s[i] == s[len])
            {
                len++;
                lps[i] = len;
                i++;
            }
            else
            {

                if (len != 0)
                {
                    len = lps[len - 1];
                }
                else
                {
                    lps[i] = 0;
                    i++;
                }
            }
        }

        return lps;
    }
    bool repeatedSubstringPattern(string s)
    {
        vector<int> lps = buildLPS(s);
        int n = s.size();
        int last = lps[n - 1];
        return (last > 0 && n % (n - last) == 0);
    }
};