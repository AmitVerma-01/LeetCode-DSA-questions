int length(Node *head)
{   
    Node* temp=head;
	int cnt=1;
    while(temp->next!=NULL){
        temp=temp->next;
        cnt++;
    }
    return cnt;
}
