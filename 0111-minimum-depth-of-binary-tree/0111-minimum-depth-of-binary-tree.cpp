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
    int minDepth(TreeNode* root) {
        int cur = 0;
        int sol = solution(root, cur);
        return sol;
        
    }

    int solution(TreeNode* root, int &cur){
        if(root==nullptr){
            return 0;
        }
        int ans=0;
        int left = solution(root->left, cur);
        int right = solution(root->right, cur);
        if(left==0) return 1+right;
        if(right == 0)  return 1+left;

        return  1+ min(right, left);

        // return ans;
    }
};