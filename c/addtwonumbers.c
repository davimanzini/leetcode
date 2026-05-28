
 #include <stdio.h>
 
 //* Definition for singly-linked list.
  struct ListNode {
      int val;
      struct ListNode *next;
  };
 
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    
    struct ListNode *l3 = malloc(sizeof(struct ListNode));
    l3->next = NULL;
    struct ListNode *aux = l3;
    int carry = 0;
    int soma = 0;
    while((l1 != NULL) || (l2 != NULL)){

        if((l1 != NULL) && (l2 != NULL)){
            soma = l1->val + l2->val + carry;
            aux->val = soma % 10;
            carry = soma / 10;
        }
        else if(l1 != NULL){
            soma = l1->val + carry;
            aux->val = soma % 10;
            carry = soma / 10;
        }
        else{
            soma = l2->val + carry;
            aux->val = soma % 10;
            carry = soma / 10;
        }

        if(l1 != NULL){
            l1 = l1->next;
        }

        if(l2 != NULL){
            l2 = l2->next;
        }

        if(l1 != NULL || l2 != NULL){
            struct ListNode *prox = malloc(sizeof(struct ListNode));
            prox->next = NULL;
            aux->next = prox;
            aux = aux->next;
        }
    }
    if(carry != 0){
        struct ListNode *ultimo = malloc(sizeof(struct ListNode));
        ultimo->val = carry;
        aux->next = ultimo;
        ultimo->next = NULL;
    }
    return l3;
}