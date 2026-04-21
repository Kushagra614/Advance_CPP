#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x)
    {
        val = x;
        left = NULL;
        right = NULL;
    }
};

bool dfs(TreeNode* p, TreeNode* q) {
        if (p == NULL && q == NULL) return true;
        else if (p == NULL && q != NULL || p != NULL && q == NULL) return false;
        else {
            if (p->val != q->val) return false;
            else {
                return (dfs(p->left, q->left) && dfs(p->right, q->right));
            }
        }
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        // start traversing the root bt
        if (subRoot == NULL)
            return true;
        if (root == NULL)
            return false;
        //  as soon as i get that root == subroot
        if (root->val == subRoot->val) {
            if (dfs(root, subRoot)) return true;
        }
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }

int main()
{

    TreeNode *p = new TreeNode(3);
    p->left = new TreeNode(4);
    p->right = new TreeNode(5);
    p->left->left = new TreeNode(1);
    p->left->right = new TreeNode(2);

    TreeNode *q = new TreeNode(4);
    q->left = new TreeNode(1);
    q->right = new TreeNode(2);

    if(isSubtree(p,q))
    {
        cout<<"True\n";
    }
    else{
        cout<<"False\n";
    }

    return 0;
}