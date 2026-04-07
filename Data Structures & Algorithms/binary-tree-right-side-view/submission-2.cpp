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
        if(!root) return {};
        vector<int> right;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            stack<int>stk;
            int size=q.size();
            int i=0;
            while(i<size){
                TreeNode* node=q.front();q.pop();
                if(node){
                    stk.push(node->val);
                    if(node->left) q.push(node->left);
                    if(node->right) q.push(node->right);
                }
                if(size-i==1){
                    right.push_back(stk.top());
                    stk.pop();
                }
                i++;
            }
        }   
        return right;
    }
};
