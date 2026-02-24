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

vector<int> aux(vector<int> v, TreeNode *raiz){

    if(raiz == NULL){
        return v;
    }

    v.push_back(raiz->val);
    aux(v, raiz->left);
    aux(v, raiz->right);

}

class Solution {
public:
    int sumRootToLeaf(TreeNode* root) {
        

        vector<int> esq;
        vector<int> dir;
        esq.push_back(root->val);
        dir.push_back(root->val);

        aux(esq, root);
        aux(dir, root);
    }
};