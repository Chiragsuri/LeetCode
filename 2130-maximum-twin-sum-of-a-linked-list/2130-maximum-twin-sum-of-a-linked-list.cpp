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
    int pairSum(ListNode* head) {
        if(head->next == NULL)
            return head->val;
        ListNode* temp =head;
        int n=1;
        while(temp->next != NULL){
            n++;
            temp=temp->next;
        }
        temp = head;
        stack<int>st;
        int i=0;
        while(i<=(n/2)-1){
            st.push(temp->val);
            temp=temp->next;
            i++;
        }
        
            int maxi = INT_MIN;
        for(i; i<n ; i++){
            maxi = max(maxi,st.top() + temp->val);
            temp= temp->next;
            st.pop();
        }
        return maxi;
    }
};