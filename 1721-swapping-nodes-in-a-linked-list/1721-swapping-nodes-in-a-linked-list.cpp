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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* node1 = nullptr;
        ListNode* node2 = nullptr;
        
        // Move the fast pointer to the kth node from the beginning
        for (int i = 1; i < k; i++) {
            fast = fast->next;
        }
        
        // Save the kth node as node1
        node1 = fast;
        
        // Move both slow and fast pointers simultaneously until fast reaches the end
        while (fast->next) {
            slow = slow->next;
            fast = fast->next;
        }
        
        // Save the node at (length - k + 1) as node2
        node2 = slow;
        
        // Swap the values of node1 and node2
        int tempValue = node1->val;
        node1->val = node2->val;
        node2->val = tempValue;
        
        return head;
    }
};