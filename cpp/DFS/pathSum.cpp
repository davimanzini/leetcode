#include <bits/stdc++.h>
using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


class Solution {
public:

    bool traversal(TreeNode *root, int targetSum, int currVal){
        
        if(root == nullptr) return false;

        currVal += root->val;
        
        if(root->left == nullptr && root->right == nullptr){
            return currVal == targetSum;
        }

        return(traversal(root->left, targetSum, currVal) || traversal(root->right, targetSum, currVal));
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        int currVal = 0;
        return traversal(root, targetSum, currVal);
    }
};