#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
    TreeNode* build(vector<int>& pre, int& idx, vector<int>& in, int l, int r, unordered_map<int,int>& mp) {
        if (l > r) return nullptr;
        int rootVal = pre[idx++];
        TreeNode* root = new TreeNode(rootVal);
        int mid = mp[rootVal];
        root->left  = build(pre, idx, in, l, mid - 1, mp);
        root->right = build(pre, idx, in, mid + 1, r, mp);
        return root;
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int> mp;
        for (int i = 0; i < (int)inorder.size(); i++) mp[inorder[i]] = i;
        int idx = 0;
        return build(preorder, idx, inorder, 0, inorder.size() - 1, mp);
    }
};
