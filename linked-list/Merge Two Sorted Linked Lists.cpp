#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/
Node<int>* solve(Node<int>* first, Node<int>* second){
    Node<int>* pre=first;
    Node<int>* curr=first->next;
    
    if(pre->next==NULL){
        pre->next=second;
    }
    while(curr != NULL && second!=NULL){
        if((second->data >= pre->data) && (second->data <= curr->data)){
            pre->next=second;
            second=second->next;
            pre=pre->next;
            pre->next=curr;
            
        }
        else{
            pre=curr;
            curr=curr->next;
            if(curr==NULL){
                pre->next=second;
                return first;
            }
        }
    }
    

      return first;
    }
Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    if(first==nullptr){
        return second;
    }
    if(second==nullptr){
        return first;
    }

    if(first->data < second->data){
        return solve(first,second);
    }
    else {
        return solve(second,first);
    }
}
