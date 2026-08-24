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

    int help(TreeNode* root, int &maxSum){
        if(root == nullptr) return 0;
        int leftSum = help(root->left, maxSum);
        int rightSum = help(root->right, maxSum);

        maxSum = max(root->val, maxSum);
        maxSum = max(maxSum, max(root->val+leftSum, root->val+rightSum));

        maxSum = max(maxSum, root->val+leftSum+rightSum);

        return max(root->val, max(leftSum, rightSum)+root->val);
    }

    int maxPathSum(TreeNode* root) {
        int maxSum = INT_MIN;
        help(root, maxSum);
        return maxSum;
        
    }
};