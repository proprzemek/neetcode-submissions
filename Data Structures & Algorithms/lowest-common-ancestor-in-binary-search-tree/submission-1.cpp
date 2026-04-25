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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* obecny = root;

        while(obecny != nullptr){

        if(root == nullptr){
            return nullptr;
        }

        if(p->val > obecny->val && q->val > obecny->val){
            obecny = obecny->right;
        }
        if(p->val < obecny->val && q->val < obecny->val){
            obecny = obecny->left;
        }
        else{
            return obecny;
        }
        // 1. start z pierwszego numeru
        
        //2. idziemy w dół w lewo i w prawo do momentu aż nie spotkamy p i q
        // 3. potem musimy znaleźć połączenie, ale nie wiem jak to zrobić!!
        }
        return nullptr;
    }
};
