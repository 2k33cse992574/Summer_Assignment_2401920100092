/*
Question: Daily Temperatures (LC 739)
Approach: Stack
Time Complexity: O(n) where n is the size of temperatures
Difficulty: Medium
Concept: Stack
*/

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        stack<int> st;
        vector<int> ans(n,0);
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && temperatures[i]>temperatures[st.top()])
            {
                int prev_idx=st.top();
                ans[prev_idx]=i-prev_idx;
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
};