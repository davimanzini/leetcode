#include <stdio.h>

  struct ListNode {
     int val;
      struct ListNode *next;
  };
 
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    
    struct ListNode *l3 = malloc(sizeof(struct ListNode));
    l3->next = NULL;
    struct ListNode *head = l3;

    while((l1 != NULL) || (l2 != NULL)){

        struct ListNode *new = malloc(sizeof(struct ListNode));
        new->next = NULL;

        if((l1 != NULL) && (l2 != NULL)){
            if(l1->val <= l2->val){
                new->val = l1->val;
                l1 = l1->next;
            }
            else{
                new->val = l2->val;
                l2 = l2->next;
            }
        }

        else if(l1 == NULL){
            new->val = l2->val;
            l2 = l2->next;
        }

        else{ //l2 == NULL
            new->val = l1->val;
            l1 = l1->next;
        }
        l3->next = new;
        l3 = l3->next;
    }

    return head->next;
}