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
    bool isValidBST(TreeNode* root) {
        return sprawdzWidelki(root, nullptr, nullptr);
    }

private:
    bool sprawdzWidelki(TreeNode* wezel, TreeNode* minWezel, TreeNode* maxWezel) {
        
        if (wezel == nullptr) {
            return true;
        }

        if (minWezel != nullptr && wezel->val <= minWezel->val) {
            return false;
        }

        if (maxWezel != nullptr && wezel->val >= maxWezel->val) {
            return false;
        }

        
        bool sprawdzLewo = sprawdzWidelki(wezel->left, minWezel, wezel);
        
        bool sprawdzPrawo = sprawdzWidelki(wezel->right, wezel, maxWezel);

        return sprawdzLewo && sprawdzPrawo;
    }
};