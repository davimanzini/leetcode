#include <stdlib.h>
#include <stdbool.h>

struct TreeNode {
      int val;
      struct TreeNode *left;
      struct TreeNode *right;
};

bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    
    if(p == NULL && q == NULL){
        return true;
    }
    else if(p == NULL || q == NULL){
        return false;
    }
    else{
        if(p->val != q->val){
            return false;
        }
    }

    bool left_ok = isSameTree(p->left, q->left);
    bool right_ok = isSameTree(p->right, q->right);

    if(left_ok && right_ok){
        return true;
    }
    else{
        return false;
    }
}