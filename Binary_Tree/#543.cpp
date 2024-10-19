/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
private:
    int maxDiameter = 0;

public:
    int maxWidth(TreeNode* root) {
        if (root == nullptr)
            return 0;

        int leftDepth = maxWidth(root->left);
        int rightDepth = maxWidth(root->right);

        maxDiameter = max(maxDiameter, leftDepth+rightDepth);

        return 1 + max(leftDepth, rightDepth);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        maxWidth(root);
        return maxDiameter;
    }
};