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
    int balanced = true;

    
    int height(TreeNode* node) {
        if (node == nullptr) {
            return 0;
        }

        int leftHeight = height(node->left);
        int rightHeight = height(node->right);

        int nodeHeight;
        if (leftHeight != rightHeight) {
            if (abs(leftHeight - rightHeight) > 1) {
                balanced = false;
            }
            if (leftHeight > rightHeight) {
                nodeHeight = leftHeight + 1;
            } else {
                nodeHeight = rightHeight + 1;
            }
        } else {
            nodeHeight += 1;
        }

        
        return nodeHeight;
    }

    // int diameterOfBinaryTree(TreeNode* root) {
    //     best = 0;  

        
    //     height(root);
    //     return best;
        
    // }

    bool isBalanced(TreeNode* root) {
        balanced = true;
        
        height(root);

        return balanced;
    }
};



