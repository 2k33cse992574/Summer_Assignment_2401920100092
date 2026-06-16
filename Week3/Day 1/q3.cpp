/*
Question: Middle of the Linked List(LC 876)
Approach: Two Pointer Approach
Time Complexity: O(N)
Difficulty: Easy
Concept: Linked List, Two Pointer Approach
*/

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast !=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
};