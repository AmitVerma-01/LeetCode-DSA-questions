Node* copyRandomList(Node* head) {
        if(head==NULL)
        return head;
        if(head->next==NULL)
        {Node* temp=new Node(head->val);
            if(head->random==head){
                temp->random=temp;
                return temp;
            }
            return temp;
        }

        Node* thead=head;
        while(thead){
            Node* far=thead->next;
            thead->next=new Node(thead->val);
            thead->next->next=far;
            thead=far;
        }
        Node* temp=new Node(0);
        thead=head;
        while(thead){
            if(thead->random==NULL)
            thead->next->random=NULL;
            else
            thead->next->random=thead->random->next;
            thead=thead->next->next;
        }
        thead=head->next;
        temp=thead;
        Node* cur=head;
        while(temp->next!=NULL){
            cur->next=temp->next;
            cur=cur->next;
            temp->next=cur->next;
            temp=temp->next;
        }
        cur->next=NULL;
        temp->next=NULL;
        return thead;
    }
