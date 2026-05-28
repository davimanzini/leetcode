#include <stdio.h>


struct ListNode {
     int val;
     struct ListNode *next;
};
 
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    
    struct ListNode *l1 = head;
    int count = 1;

    while(l1->next != NULL){
        count++;
        l1 = l1->next;
    }

    if(count == 1){
        return NULL;
    }

    else{
        l1 = head;

        if((count - n) != 0){
            for(int i = 1; i < (count - n); i++){
                l1 = l1->next;
            }
            struct ListNode *l2 = l1->next;

            l1->next = l2->next;
            l2->next = NULL;
        }
        else{
            head = l1->next;
            l1->next = NULL;
        }

        return head;
    }
}