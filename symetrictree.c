#include <stdio.h>
#include <stdbool.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

bool compara(struct TreeNode *esq, struct TreeNode *dir){
    if((esq->right->val == dir->left->val) && (esq->left->val == dir->right->val)){
        return true;
    }
    else{
        return false;
    }
}

bool isSymmetric(struct TreeNode* root) {
    
    if(root == NULL){
        return true;
    }
    if((root->left == NULL) && (root->right == NULL)){
        return true;
    }
    if((root->left == NULL) || (root->right== NULL)){
        return false;
    }

    bool is_sym = compara(root->left, root->right);

    bool left_ok = isSymmetric(root->left);
    bool right_ok = isSymmetric(root->right);

    if(left_ok && right_ok && is_sym){
        return true;
    }
    else{
        return false;
    }

}