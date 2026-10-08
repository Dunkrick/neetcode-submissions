/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int f(TreeNode* node, int maxi){
        if(!node) return 0;
        int g = 0;
        if(node->val>=maxi){
            maxi = node->val;
            g = 1;
        }
        int left = f(node->left,maxi);
        int right = f(node->right,maxi);
        return left+right+g;
    }
    int goodNodes(TreeNode* root) {
        return f(root,INT_MIN);       

    }
};
