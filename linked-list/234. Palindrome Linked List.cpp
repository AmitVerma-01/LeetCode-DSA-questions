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
ListNode* reverseList(ListNode* temp){
        ListNode* pre=NULL;
        ListNode* far;
        while(temp!=NULL){
          far=temp->next;
          temp->next=pre;
          pre=temp;
          temp=far;
        }
        return pre;
}
    bool isPalindrome(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* entry=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode* temp=slow->next;
        slow->next=reverseList(temp);
        temp=slow->next;
        while(temp!=NULL){
            if(temp->val!=entry->val){
                return 0;
            }
            temp=temp->next;
            entry=entry->next;
        }
        return 1;
    }
};
