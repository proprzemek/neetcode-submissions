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
    unordered_map<int, int> mapa_inorder;
    
    int indeks_preorder = 0; 

public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for (int i = 0; i < inorder.size(); i++) {
            mapa_inorder[inorder[i]] = i;
        }
        
        return buduj(preorder, 0, inorder.size() - 1);
    }

private:
    TreeNode* buduj(vector<int>& preorder, int lewy_inorder, int prawy_inorder) {
        if (lewy_inorder > prawy_inorder) {
            return nullptr;
        }

        int wartosc_korzenia = preorder[indeks_preorder++];
        
        TreeNode* korzen = new TreeNode(wartosc_korzenia);

        int srodek = mapa_inorder[wartosc_korzenia];
        korzen->left = buduj(preorder, lewy_inorder, srodek - 1);
        
        korzen->right = buduj(preorder, srodek + 1, prawy_inorder);

        return korzen;
    }
};