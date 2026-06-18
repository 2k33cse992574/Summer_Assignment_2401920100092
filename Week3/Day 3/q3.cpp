/*
Question: Next Greater Element I (LC 496)
Approach: Stack
Time Complexity: O(m + n) where m is the size of nums1 and n is the size of nums2
Difficulty: Easy
Concept: Stack, Hash Table
 */

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        int m=nums1.size();
        int n=nums2.size();
        map<int, int>mp;
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && nums2[i]>=st.top())
            {
                st.pop();
            }
            if(st.empty() || nums2[i]>st.top())
            {
                mp[nums2[i]]=-1;
            }
            else
            {
                mp[nums2[i]]=st.top();
            }
            st.push(nums2[i]);
        }
        vector<int> ans;
        for(int i=0;i<nums1.size();i++)
        {
            ans.push_back(mp[nums1[i]]);
        }
        return ans;
    }
};