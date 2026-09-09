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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next;
        while(curr){
            //store the next node
            next = curr ->next;
            //Reverse current's next
            curr -> next = prev;
            //Move prev forward
            prev = curr;
            //Move curr forward
            curr = next;
        }
        return prev;
    }
};
