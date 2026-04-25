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

#include <queue>

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> wynik;
        
        if (root == nullptr) return wynik;

        queue<TreeNode*> kolejka; 
        kolejka.push(root);

        while (!kolejka.empty()) {
            
            int rozmiar_poziomu = kolejka.size(); 
            
            vector<int> obecny_poziom; 

            for (int i = 0; i < rozmiar_poziomu; i++) {
                
                TreeNode* wezel = kolejka.front();
                kolejka.pop();

                obecny_poziom.push_back(wezel->val);

                if (wezel->left != nullptr) kolejka.push(wezel->left);
                if (wezel->right != nullptr) kolejka.push(wezel->right);
            }
            

            wynik.push_back(obecny_poziom); 
        }

        return wynik;
    }
};
