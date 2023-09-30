// most optimal solution TC-O(m+n) && SC- O(1) 
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
     ListNode* d1=headA;
     ListNode* d2=headB;
     if(headA==headB) return headA;
     while(d1!=NULL || d2 != NULL){
         if(d1==NULL && d2!=NULL){
             d1=headB;
         }
         if(d2==NULL && d1!= NULL){
             d2=headA;
         }
         if(d1==d2)
         return d1;
         d1=d1->next;
         d2=d2->next;
         
     }   
     return NULL;
    }
