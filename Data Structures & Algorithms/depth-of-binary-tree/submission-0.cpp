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
    int maxDepth(TreeNode* root) {

        if (root == nullptr) {
            return 0;
        }
        
        int lewa_glebokosc = maxDepth(root->left);
        int prawa_glebokosc = maxDepth(root->right);
        

        return max(lewa_glebokosc, prawa_glebokosc) + 1;
    }
};
