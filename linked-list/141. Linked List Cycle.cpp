class Solution {
public:
    bool hasCycle(ListNode *head) {
        set<ListNode*> st;
        while(head!=NULL){
            if(st.find(head->next)!=st.end())
            return true;
            st.insert(head->next);
            head=head->next;
        }
    return false;
    }
};
