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
        
        if(head == NULL) return head;

        ListNode *curr = head->next;
        ListNode *aux = head;

        aux->next = NULL;

        while(curr != NULL){

            aux = curr->next;
            curr->next = head;
            head = curr;
            curr = aux;
        }
        return head;
    }
};