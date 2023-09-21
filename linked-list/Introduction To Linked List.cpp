Node* constructLL(vector<int>& arr) {
    Node* node1= new Node(arr[0]);
    node1->next=NULL;
    Node* head=node1;
    Node* tail=node1;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        tail->next=temp;
        tail=temp;
    }
    return head;
}
