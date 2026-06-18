/*
Question: Palindrome Linked List(LC 234)
Approach: Two Pointers
Time Complexity: O(n)
Difficulty: Easy
Concept: Linked List, Two Pointers
 */

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast !=NULL && fast->next!= NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode* prev=NULL;
        ListNode* curr=slow;
        ListNode* next=NULL;
        while(curr != NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        ListNode* first=head;
        ListNode* second=prev;
        while(second != NULL)
        {
            if(first->val != second->val)
            {
                return false;
            }
            first=first->next;
            second=second->next;
        }
        return true;
    }
};