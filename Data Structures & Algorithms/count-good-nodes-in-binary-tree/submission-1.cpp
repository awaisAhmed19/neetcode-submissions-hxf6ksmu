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
    int goodNodes(TreeNode* root) {
    stack<pair<TreeNode*,int>>stk;
    stk.push({root, root->val});
    vector<int>good_node;
    //good_node.push_back(root->val);
    while (!stk.empty()) {
        auto [node, maxv] = stk.top();
        stk.pop();

        if (node->val >= maxv) good_node.push_back(node->val);
        int newmax = max(maxv, node->val);

        if (node->left) stk.push({node->left, newmax});
        if (node->right) stk.push({node->right, newmax});
    }
     for (int a : good_node) {
        std::cout << a;
    }
    return good_node.size();
    }
};
