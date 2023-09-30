// optimal TC-O(N) && SC- O(1);
 ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=new ListNode();
        temp->next=head;
        ListNode* slow=temp;
        ListNode* fast=temp;
        while(n){
            fast=fast->next;
            n=n-1;
        }
        while(fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
        slow->next=slow->next->next;
        return temp->next;
    }
