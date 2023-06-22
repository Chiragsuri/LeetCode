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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head->next;
        int sum = 0;
        ListNode* newHead = new ListNode(0);
        ListNode* dummy = newHead;
        
        while (temp != NULL) {
            if (temp->val == 0) {
                dummy->next = new ListNode(sum); 
                dummy = dummy->next; 
                sum = 0;
            } else {
                sum += temp->val;
            }
            
            temp = temp->next;
        }
        
        if (sum > 0) {
            dummy->next = new ListNode(sum); 
        }
        
        ListNode* result = newHead->next;
        delete newHead; 
        return result;
    }
};
