// Last updated: 12/4/2025, 5:55:16 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* slow = dummy;
        ListNode* fast = dummy;

        for(int i = 0; i<=n;i++){
            
                fast = fast->next;
            
        }

        while(fast !=nullptr){
            slow = slow->next;
            fast = fast->next;
        }

        slow->next = slow->next->next;

        ListNode* newHead = dummy->next;
        delete dummy;
        return newHead;
    }
};