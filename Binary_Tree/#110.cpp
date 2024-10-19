class Solution {
public:
    int checkHeight(TreeNode* node) {
        if (!node) return 0;

        int leftHeight = checkHeight(node->left);
        if (leftHeight == -1) return -1;

        int rightHeight = checkHeight(node->right);
        if (rightHeight == -1) return -1;

        if (abs(leftHeight - rightHeight) > 1) return -1;

        return max(leftHeight, rightHeight) + 1;
    }

    bool isBalanced(TreeNode* root) {
        return checkHeight(root) != -1;
    }
}; 