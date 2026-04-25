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
    int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode*> stos;
        TreeNode* obecny = root;
        while(obecny != nullptr || !stos.empty()){
            while(obecny != nullptr){
            stos.push(obecny);    
            obecny = obecny->left;
            }

            obecny = stos.top();
            stos.pop();
            k--;
            if(k == 0){
                return obecny->val;
            }
            obecny = obecny->right;
        }
        return -1;
    }
};
