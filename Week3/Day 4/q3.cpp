/*
Question: Largest Rectangle in Histogram (LC 84)
Approach: Stack
Time Complexity: O(n) where n is the size of heights
Difficulty: Hard
Concept: Stack
*/

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        stack<int> st;
        vector<int> nsr(n),nsl(n);
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && heights[i]<=heights[st.top()])
            {
                st.pop();
            }
            if(st.empty())   nsl[i]=-1;
            else             nsl[i]=st.top();
            st.push(i);
        }
        while(!st.empty())
        {
            st.pop();
        }
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && heights[i]<=heights[st.top()])
            {
                st.pop();
            }
            if(st.empty())   nsr[i]=n;
            else             nsr[i]=st.top();
            st.push(i);
        }
        int area1=0;
        for(int i=0;i<n;i++)
        {
            int width=nsr[i]-nsl[i]-1;
            int area=width*heights[i];
            if(area>area1) area1=area;
        }
        return area1;
        }

};