#include <stdbool.h>
#include <stdlib.h>

  struct TreeNode {
      int val;
     struct TreeNode *left;
      struct TreeNode *right;
  };
 
int nodeHeight(struct TreeNode *root){

    if(root == NULL){
        return 0;
    }
    else{
        int hleft = nodeHeight(root->left);
        int hright = nodeHeight(root->right);

        if(hleft > hright){
            return hleft + 1;
        }
        else{
            return hright + 1;
        }
    }
}

bool isBalanced(struct TreeNode* root) {
    
    if((root == NULL)){
        return true;
    }

    else{
        bool esq_bal = isBalanced(root->left);
        bool dir_bal = isBalanced(root->right);

        if(!esq_bal || !dir_bal){
            return false;
        }

        int left_h  = height(root->left);
        int right_h = height(root->right);

        if(left_h - right_h > 1 || right_h - left_h > 1){
            return false;
        }
        return true;
    }
}