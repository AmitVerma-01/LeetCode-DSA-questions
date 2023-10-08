ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || !k)
        return head;

        int cnt=1;
        ListNode* temp=head;

        while(temp->next!=NULL){
            cnt++;
            temp=temp->next;
        }

        temp->next=head;
        k%=cnt;
        k=cnt-k;
        

        while(k){
            temp=temp->next;
            k--;
        }

        head=temp->next;
        temp->next=NULL;

        return head;
    }
