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
        TreeNode* curr = root;
        if (curr == nullptr) {
            return 0;
        }
        int max;

        int max1 = maxDepth(curr->left) + 1;
        int max2 = maxDepth(curr->right) + 1;

        if (max1 > max2) {
            max = max1;
        } else {
            max = max2;
        }
        
        return max;
    }
};

