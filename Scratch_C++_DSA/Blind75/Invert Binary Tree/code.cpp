#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *right;
    TreeNode *left;

    TreeNode(int x)
    {
        val = x;
        left = NULL;
        right = NULL;
    }
};

void swap(TreeNode *&leftNode, TreeNode *&rightNode)
{
    TreeNode *temp = leftNode;
    leftNode = rightNode;
    rightNode = temp;
}

TreeNode *invertTree(TreeNode *root)
{
    // we will use a noral swap logic using a temp variable

    if (root == NULL)
        return root;
    swap(root->left, root->right);
    invertTree(root->left);
    invertTree(root->right);
    return root;
}

TreeNode *insert(TreeNode *root, int val)
{
    if (root == NULL)
        return new TreeNode(val);

    if (val < root->val)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);

    return root;
}

//for traversing the node, (i will do inorder traversal)
void preorder(TreeNode* root)
{
     if (root == NULL) return;

    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    TreeNode *root = new TreeNode(4);

    root->left = new TreeNode(2);
    root->right = new TreeNode(7);

    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);

    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(9);

    cout << "Before Invert:\n";
    preorder(root);

    invertTree(root);

    cout << "\nAfter Invert:\n";
    preorder(root);

    return 0;
}