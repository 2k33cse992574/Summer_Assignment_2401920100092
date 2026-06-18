/*
 Question: Merge Two Sorted Lists (LC 21)
 Approach: Recursion
 Time Complexity: O(n+m) where n and m are the lengths of the two lists
 Difficulty: Easy
 Concept: Linked List, Recursion
 */

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL)  return list2;
        if(list2 == NULL)  return list1;
        if(list1->val>=list2->val)
        {
            list2->next=mergeTwoLists(list1,list2->next);
            return list2;
        }
        else
        {
            list1->next=mergeTwoLists(list1->next,list2);
            return list1;
        }
    }
};