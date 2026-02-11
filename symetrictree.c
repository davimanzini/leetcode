#include <stdio.h>
#include <stdbool.h>

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
    if(esq->val != dir->val){
        return false;
    }
    else{
        return (compare(esq->left, dir->right) && (compare(esq->right, dir->left)));
    }
     
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

