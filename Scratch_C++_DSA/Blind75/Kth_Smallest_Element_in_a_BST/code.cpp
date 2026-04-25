#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
    int count = 0, result = 0;
    void inorder(TreeNode* root, int k) {
        if (!root) return;
        inorder(root->left, k);
        count++;
        if (count == k) { result = root->val; return; }
        inorder(root->right, k);
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        inorder(root, k);
        return result;
    }
};
