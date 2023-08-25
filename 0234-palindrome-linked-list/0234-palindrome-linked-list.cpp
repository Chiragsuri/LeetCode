/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* Middle(ListNode* head)
    {
        ListNode *slow = head,*fast = head;
        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    ListNode* ReverseLL(ListNode* head)
    {
        ListNode *prev=NULL,*curr=head,*Next=head;
        while(curr)
        {
            Next = Next->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        return prev;
    }
    bool check(ListNode* head1, ListNode* head2)
    {
        while(head1 && head2)
        {
            if(head1->val != head2->val)
               return false;
            
            head1 = head1->next;
            head2 = head2->next;
        }
        return true;
    }
    bool isPalindrome(ListNode* head) {
        if(!head->next)  // no need to check whether head==NULL as minimum number of nodes is given as 1 in constraints.
           return true;
        ListNode* mid = Middle(head);

        ListNode* Revhead=ReverseLL(mid);

        return check(head,Revhead);
    }
};