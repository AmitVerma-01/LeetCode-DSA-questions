/**
 * Definition of doubly linked list:
 *
 * struct Node {
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() : data(0), prev(nullptr), next(nullptr) {}
 *      Node(int val) : data(val), prev(nullptr), next(nullptr) {}
 *      Node(int val, Node *p, Node *n) : data(val), prev(p), next(n) {}
 * };
 *
 *************************************************************************/

Node * deleteLastNode(Node *head) {
    if(head->next==NULL){
        Node* temp=head;
        head=NULL;
        delete temp;
        return head;
    }
    else {
        Node* curr=head;
        Node* pre=NULL;
        while(curr->next!=NULL){
            pre=curr;
            curr=curr->next;
        }
        pre->next=curr->next;
        delete curr;
    }
    return head;
}
