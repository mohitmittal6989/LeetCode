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
        
        int cur = 0;
        int ans = solution(root,cur);

        return ans;
    }

    int solution(TreeNode* root, int &cur){
        if(root == nullptr){
            return 0;

        }

        int left = solution(root->left, cur);
        int right = solution(root->right, cur);

        cur =1+ max(left, right);

        return cur;


    }
};