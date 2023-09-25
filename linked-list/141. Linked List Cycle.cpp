// brute force approach using hashing TC-O(N) & SC-O(N)
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
// Optimal Approach using two pointer (slow and fasr pointer 
//  TC-O(N) & SC-O(1)
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast!=NULL && fast->next!=NULL){
            if(fast==slow){
                return true;
            }
            fast=fast->next->next;
            slow=slow->next;
        }
        return false;
    }
};
