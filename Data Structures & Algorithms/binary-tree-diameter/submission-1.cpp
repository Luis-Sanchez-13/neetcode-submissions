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
    int best = 0;   // longest path (in edges) found so far

    
    int height(TreeNode* node) {
        if (node == nullptr) {
            return 0;
        }

        int leftHeight = height(node->left);
        int rightHeight = height(node->right);

        int nodeHeight;
        if (leftHeight > rightHeight) {
            nodeHeight = leftHeight + 1;
        } else {
            nodeHeight = rightHeight + 1;
        }

        if (leftHeight + rightHeight > best) {
            best = leftHeight + rightHeight;
        }
        return nodeHeight;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        best = 0;  

        
        height(root);
        return best;
        
    }
};
