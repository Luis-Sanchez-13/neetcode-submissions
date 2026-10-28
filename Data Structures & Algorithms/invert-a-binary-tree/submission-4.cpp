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
    TreeNode* invertTree(TreeNode* root) {
        TreeNode* curr = root;
        if (curr == nullptr) {
            return nullptr;
        }
        // if (curr->left == nullptr) {
        //     return curr;
        // }
        // if (curr->right == nullptr) {
        //     return curr;
        // }
        
        TreeNode* tempLeft = invertTree(curr->left);
        TreeNode* tempRight = invertTree(curr->right);

        curr->left = tempRight;
        curr->right = tempLeft;
        return curr;
    }
};
