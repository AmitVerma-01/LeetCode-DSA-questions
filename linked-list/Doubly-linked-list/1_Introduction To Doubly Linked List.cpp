/*
 * Definition for doubly-linked list.
 * class Node
 * {
 * public:
 *    int data;
 *    Node *next, *prev;
 *    Node() : data(0), next(nullptr), prev(nullptr) {}
 *    Node(int x) : data(x), next(nullptr), prev(nullptr) {}
 *    Node(int x, Node *next, Node *prev) : data(x), next(next), prev(prev) {}
 * };
 */

Node* constructDLL(vector<int>& arr) {
    Node* head=NULL;
    Node* tail=NULL;
    Node* curr=NULL;
    for(int i=0;i<arr.size();i++){
        if(head==NULL){
            Node* temp=new Node(arr[i]);
            head=temp;
            curr=temp;
        }
        else {
            Node* temp=new Node(arr[i]);
            curr->next=temp;
            temp->prev=curr;
            curr=temp;
        }
    }
    return head;
}
