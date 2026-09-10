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
    int length(TreeNode* root){
        if(root == NULL) return 0;
        if(root -> left == NULL and root -> right == NULL){
            return 1;
        }
        return 1 + length(root -> left) + length(root -> right);
    }

    int sum(TreeNode* root){
        if(root == NULL) return 0;
        return root -> val + sum(root -> left) + sum(root -> right);
    }
    void helper(TreeNode* root, int& ans){
        if(root == NULL) return;
        if(root -> val == sum(root) / length(root)) ans++;
        helper(root -> left, ans);
        helper(root -> right, ans);
    }
    int averageOfSubtree(TreeNode* root) {
        int ans = 0;
        helper(root, ans);
        return ans;
    }
};