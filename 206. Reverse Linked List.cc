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
/*class Solution {
    //Solution with a extra space to store the value of the linked list
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* ans = new ListNode(0),  *rans = ans;
        vector<int> copy;
        while(head){
            copy.push_back(head->val);
            head = head->next;
        }
        for(int i=copy.size()-1;i>=0;i--){
            ans->next = new ListNode(copy[i]);
            ans = ans->next;
        }
        return rans->next;
    }
};*/
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
    //solution with a pointer to reverse the linked list
    ListNode* reverseList(ListNode* head) {
        ListNode *nextNode, *prevNode = NULL;
        while (head) {
            nextNode = head->next;
            head->next = prevNode;
            prevNode = head;
            head = nextNode;
        }
        return prevNode;
    }
};