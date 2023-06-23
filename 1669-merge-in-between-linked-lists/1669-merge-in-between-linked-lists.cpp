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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int a1=0;
        ListNode* rs = list1;
        ListNode* re = list1;
        //traverse till a-1
        while(a1!=a-1){
            rs=rs->next;
            a1++;
        }
        //traverse till b
        int a2=0;
        while(a2!=b){
            re=re->next;
            a2++;
        }
        ListNode* dummy=rs->next;
        //assign rs to list2 head
        rs->next=list2;
        
        //traverse till end of list2
        ListNode* l2 = list2;
        while(l2->next!=NULL){
            l2=l2->next;
        }
        
        //point end of list 2 to re->next;
        l2->next=re->next;
        
        //point b->next to null
        re->next=NULL;
        
        //remove the extra nodes
        delete dummy;
        
        
        return list1;
    }
};