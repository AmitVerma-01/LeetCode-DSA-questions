// optimal approach TC- O(N) & SC- o(1)
ListNode *detectCycle(ListNode *head) {
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* entry=head;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast){
                while(entry!=slow){
                    slow=slow->next;
                    entry=entry->next;
                }
                return entry;
            }
        }
        return NULL;
    }
// brute force approach TC- O(N) & SC- O(N) , we can also use the set data_structure
ListNode *detectCycle(ListNode *head) {
        int i=0;
        unordered_map<ListNode*,int>mp;
        while(head!=NULL){
            if(mp.find(head)!=mp.end()){
                return head;
            }
            mp[head]=i;
            i++;
            head=head->next;
        }
        return NULL;
    }
