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
    int preind=0;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int> inord;
        for(int i=0;i<inorder.size();i++ ){
            inord[inorder[i]]=i;
        }
        return build(preorder,inorder,0,inorder.size()-1,inord);
    }

    TreeNode* build(vector<int>& preorder, vector<int>& inorder,int instart,int inend,map<int,int>& inord){
        if(instart>inend){
            return nullptr;
        }

        int rootval=preorder[preind++];
        TreeNode* root=new TreeNode(rootval);

        int inind=inord[rootval];
        
        root->left=build(preorder,inorder,instart,inind-1,inord);
        root->right=build(preorder,inorder,inind+1,inend,inord);
        
        return root;
    }
};
