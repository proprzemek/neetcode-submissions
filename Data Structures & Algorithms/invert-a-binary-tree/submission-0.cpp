class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr) {
            return nullptr;
        }
        
        TreeNode* tymczasowy = root->left; 
        root->left = root->right;          
        root->right = tymczasowy;          
        
        invertTree(root->left);
        invertTree(root->right);
        
        return root;
    }
};