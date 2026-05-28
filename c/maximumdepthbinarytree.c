#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};
 
int maxDepth(struct TreeNode* root) {
    
    if(root == NULL){
        return 0;
    }

    int left_size = maxDepth(root->left);
    int right_size = maxDepth(root->right);

    if(left_size > right_size){
        return left_size + 1;
    }
    else{
        return right_size + 1;
    }
}