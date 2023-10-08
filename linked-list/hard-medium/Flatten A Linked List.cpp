Node* merge(Node* a,Node* b){
	Node* res=new Node();
	Node* temp=res;

	while(a!=NULL && b!=NULL){
		if(a->data < b->data){
			temp->child=a;
			temp=temp->child;
			a=a->child;
		}
		else{
			temp->child=b;
			temp=temp->child;
			b=b->child;
		}
	}

	if(a==NULL){
		temp->child=b;
	}
	else temp->child=a;
	res=res->child;
	return res;
	
}
Node* flattenLinkedList(Node* head) 
{
	if(head==NULL || head->next==NULL) {
        return head;
    }

	head->next=flattenLinkedList(head->next);

	head=merge(head, head->next);
	head->next=NULL;

	return head;
}
