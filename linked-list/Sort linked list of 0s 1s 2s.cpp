/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/
void insert(Node* &tail, Node* temp){
    tail->next=temp;
    tail=temp;
}
Node* sortList(Node *head){
   Node* head0 = new Node(-1);
   Node* tail0=head0;
   Node* head1= new Node(-1);
   Node* tail1=head1;
   Node* head2= new Node(-1);
   Node* tail2=head2;

   Node* temp=head;

   while(temp){
       int val=temp->data;

       if(val==0)
            insert(tail0,temp);
       else if( val==1)
            insert(tail1,temp);
       else if(val==2)
            insert(tail2,temp);

       temp=temp->next;
   }

    if(head1->next != NULL){
        tail0->next=head1->next;
        tail1->next=head2->next;
        tail2->next=NULL;
    }
    else
        {tail0->next=head2->next;
         tail2->next=NULL;
        }

    return head0->next;

}
