/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *fast = head, *low = head;
        while(fast && fast->next){
            fast = fast->next->next; // fast move 2 steps
            low = low->next; // low move 1 step
            if(fast == low){ // if there is a cycle
                ListNode *p = head; // p is the head of the list
                while(p != low){ // when p == low, p is the start of the cycle
                    p = p->next; 
                    low = low->next;
                }
                return p;
            }
        }
        return NULL;
    }
};