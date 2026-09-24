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
    pair<bool, int> checkBalanced(TreeNode* root){
        if(!root) return {true, 0};

        auto left = checkBalanced(root->left);
        auto right = checkBalanced(root->right);

        bool isBalanced = left.first && right.first && abs(left.second - right.second) <= 1;

        int height = 1 + max(left.second, right.second);
        
        return{isBalanced, height};
    }

    bool isBalanced(TreeNode* root) {
        return checkBalanced(root).first;
    }
};
