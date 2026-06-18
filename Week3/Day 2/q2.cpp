/*
Question: Remove Nth Node From End of List (LC 19)
Approach: Two Pointers
Time Complexity: O(n) where n is the length of the list
Difficulty: Medium
Concept: Linked List, Two Pointers
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* temp1=head;
        ListNode* temp2=dummy;
        int count=0;
        while(temp1!=NULL)
        {
            temp1=temp1->next;
            count++;
        }
        for(int i=0;i<count-n;i++)
        {
            temp2=temp2->next;
        }
        temp2->next=temp2->next->next;
        return dummy->next;
    }
};