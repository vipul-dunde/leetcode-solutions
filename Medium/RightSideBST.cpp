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
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*> que;
         vector<int> right;
        if(root==NULL) {
            return right;
        }
        
       
        que.push(root);
        
        while(!que.empty()) {
            int n =  que.size();
            for(int i=0; i<n; i++) {
                TreeNode* curr = que.front();
                que.pop();
                
                if(i==0) {
                right.push_back(curr->val);
                }
                
                if(curr->right!=NULL) {
                    que.push(curr->right);
                }
                
                if(curr->left!=NULL) {
                    que.push(curr->left);
                }
    
            }
        }
        
        return right;
    }
};