int lengthOfLoop(Node *head) {
    Node* fast=head;
    Node* slow=head;
    int cnt=1;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow){
            Node* temp=slow->next;
            while(temp!=fast){
                temp=temp->next;
                cnt++;
            }
            return cnt;
        }
    }
    return 0;
}
