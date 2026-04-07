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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        stack<pair<TreeNode*,TreeNode*>> stk;

        stk.push({p,q});

        while(!stk.empty()){
            auto [nodep,nodeq]=stk.top(); stk.pop();

            if(!nodep&&!nodeq) continue;
            if(!nodep || !nodeq || nodep->val!=nodeq->val) return false;

            stk.push({nodep->right,nodeq->right});
            stk.push({nodep->left,nodeq->left});
        }
        return true;
    }
};
