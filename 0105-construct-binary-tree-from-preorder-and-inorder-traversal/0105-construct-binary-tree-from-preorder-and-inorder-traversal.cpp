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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size();
        unordered_map<int, int> inorder_indicies;
        
        for (int i = 0; i < n; ++i){
            inorder_indicies[inorder[i]] = i;
        }
        
        return buildTree(preorder, 0, n - 1, inorder, 0, n - 1, inorder_indicies);
        
    }
    
    TreeNode* buildTree(vector<int>& preorder, int pre_start, int pre_end, vector<int>& inorder, int in_start, int in_end, unordered_map<int, int>& inorder_indicies){
        
        if (pre_start > pre_end) return nullptr;
        
        TreeNode* root = new TreeNode(preorder[pre_start]);
        
        int split = inorder_indicies[root->val];
        int left_size = split - in_start;
        
        root->left = buildTree(preorder, pre_start + 1, pre_start + 1 + left_size - 1, inorder, in_start, split - 1, inorder_indicies);
        
        root->right = buildTree(preorder, pre_start + 1 + left_size, pre_end, inorder, split + 1, in_end, inorder_indicies);
        
        
        return root;
    }
};