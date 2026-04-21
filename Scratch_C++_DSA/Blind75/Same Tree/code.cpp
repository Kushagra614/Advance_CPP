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

bool dfs(TreeNode *p, TreeNode *q)
{
    if (p == NULL && q == NULL)
        return true;
    else if (p == NULL && q != NULL || p != NULL && q == NULL)
        return false;
    else
    {
        if (p->val != q->val)
            return false;
        else
        {
            return (dfs(p->left, q->left) && dfs(p->right, q->right));
        }
    }
    return true;
}
bool isSameTree(TreeNode *p, TreeNode *q)
{
    // we wil perform pre order traversal and check if the nodes are same or not
    bool ans = dfs(p, q);
    if (ans == true)
        return true;
    else
        return false;
}

int main()
{

    TreeNode *p = new TreeNode(1);
    p->left = new TreeNode(2);
    p->right = new TreeNode(3);

    TreeNode *q = new TreeNode(1);
    q->left = new TreeNode(2);
    q->right = new TreeNode(3);

    if(isSameTree(p,q))
    {
        cout<<"The Trees are same\n";
    }
    else{
        cout<<"The Trees are not same\n";
    }

    return 0;
}