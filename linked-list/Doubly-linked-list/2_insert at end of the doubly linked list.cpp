/**
 * Definition of doubly linked list:
 *
 * struct Node {
 *      int value;
 *      Node *prev;
 *      Node *next;
 *      Node() : value(0), prev(nullptr), next(nullptr) {}
 *      Node(int val) : value(val), prev(nullptr), next(nullptr) {}
 *      Node(int val, Node *p, Node *n) : value(val), prev(p), next(n) {}
 * };
 *
 *************************************************************************/

Node * insertAtTail(Node *head, int k) {
    Node* temp=head;
    if(head==NULL){
        Node* temp=new Node(k);
        head=temp;
        return head;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* nodeToInsert=new Node(k);
    temp->next=nodeToInsert;
    nodeToInsert->prev=temp;

    return head;
}
