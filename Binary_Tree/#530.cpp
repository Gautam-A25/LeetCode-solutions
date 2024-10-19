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
private:
    vector<int> values;

    void inorderTraversal(TreeNode* node) {
        if (!node) return; 
        inorderTraversal(node->left); 
        values.push_back(node->val); 
        inorderTraversal(node->right); 
    }

public:
    int getMinimumDifference(TreeNode* root) {
        values.clear(); 
        inorderTraversal(root); 

        int minDiff = INT_MAX; 
        
        for (int i = 1; i < values.size(); i++) {
            minDiff = min(minDiff, values[i] - values[i - 1]); 
        }

        return minDiff; 
    }
};
