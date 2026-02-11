#include <stdbool.h>
#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

bool compare(struct TreeNode *esq, struct TreeNode *dir){

    if((esq == NULL) && (dir == NULL)){
        return true;
    }
    if((esq == NULL) || (dir == NULL)){
        return false;
    }
    if((esq->left->val == dir->right->val) &&
     (esq->right->val == dir->left->val)){
        return true;
     }
     else{
        return false;
     }

     compare(esq->left, dir->right);
}

bool isSymmetric(struct TreeNode* root) {
    
    if(root == NULL){
        return true;
    }
    
    bool sym = compare(root->left, root->right);

    if(sym == true){
        return true;
    }
    else{
        return false;
    }
}
