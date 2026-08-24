/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:


    bool findRootToNode(TreeNode* root, int target , vector<TreeNode*> &rootToNodePath){
        if(root == nullptr) return false;
        if(root->val == target) {
            //cout<<root->val<<" ";
            rootToNodePath.push_back(root);
            return true;
        }
        if(findRootToNode(root->left, target, rootToNodePath)){
            rootToNodePath.push_back(root);
            //cout<<root->val<<endl;
            return true;
        }
        if(findRootToNode(root->right, target, rootToNodePath)){
            rootToNodePath.push_back(root);
            return true;
        }

        return false;
    }

    void FindKdown(TreeNode* root, int k, TreeNode* blocker , vector<int>&sol){
        if(root==nullptr || k<0 || root==blocker) return;

        if(k==0) {
            sol.push_back(root->val);
            return;
        }

        FindKdown(root->left, k-1, blocker, sol);
        FindKdown(root->right, k-1, blocker, sol);
    }

    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<TreeNode*> rootToNodePath;
        vector<int> sol;
        

        findRootToNode(root, target->val,rootToNodePath);

        TreeNode* blocker = nullptr;

        for(int i=0; i<rootToNodePath.size(); i++){
            FindKdown(rootToNodePath[i], k -i, blocker,sol);

            blocker = rootToNodePath[i];
        }

        // return sol;

        
        return sol;
    }
};