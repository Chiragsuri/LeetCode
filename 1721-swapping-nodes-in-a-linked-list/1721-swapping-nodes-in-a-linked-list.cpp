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
        int len =1;
        ListNode* temp=head;
        while(temp->next){
            temp=temp->next;
            len++;
        }
        ListNode* temp1=head;
        int a=1;
        while(a!=k){
            temp1=temp1->next;
            a++;
        }
        int b=1;
        ListNode* temp2 = head;
        while(b!=len-k+1){
            temp2=temp2->next;
            b++;
        }
        
        int dummyvalue = temp1->val;
        //swapping
        temp1->val=temp2->val;
        temp2->val=dummyvalue;
        // cout<<temp2->val;
        return head;
    }
};