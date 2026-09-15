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
    int height(TreeNode* root){
        if(root == NULL) return 0;
        return 1 + max(height(root -> left), height(root -> right));
    }
    void travel(TreeNode* root, vector<vector<int>>&v, int i){
        if(root == NULL) return;
        v[i].push_back(root -> val);
        travel(root -> right, v, i+1);
        travel(root -> left, v, i+1);
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        int n = height(root);
        vector<vector<int>>v(n);
        travel(root, v, 0);
        for(int i = 0; i < n; i++){
            if(i % 2 == 0){
                reverse(v[i].begin(), v[i].end());
            }
        }
        return v;
    }
};