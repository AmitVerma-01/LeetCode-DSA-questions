Node * deleteAllOccurrences(Node* head, int k) {
    while(head->data==k){
        if(head->next==NULL)
        return NULL;
        head=head->next;
    }
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==k){
            temp->prev->next=temp->next;
            // temp=temp->next;
        }
        temp=temp->next;
    }
    return head;
}
