#include<iostream>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x)
    {
        val = x;
        left = NULL;
        right = NULL;
    }
};

TreeNode* insert(TreeNode* root, int val)
{
    //base case
    if(root == NULL)
    {
        return new TreeNode(val);
    }
    if(val < root->val)
    {
        root->left = insert(root->left, val);
    }
    else if(val < root->val)
    {
        root-> right = insert(root->left, val);
    }
    else return root;
}

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // edge case
        if (root == NULL) return NULL;

        else if(p->val < root->val && q->val < root->val) 
        {
            return lowestCommonAncestor(root->left, p, q);
            
        }
        else if(p->val > root->val && q->val > root->val) 
        {
            return lowestCommonAncestor(root->right, p, q);
        }
        else
        {
            return root;
        }
    
    }


int main(){

    TreeNode* root = NULL;

    root = insert(root, 6);
    root = insert(root, 3);
    root = insert(root, 8);
    root = insert(root, 1);
    root = insert(root, 4);

    TreeNode* p = new TreeNode(1);
    TreeNode* q = new TreeNode(4);

    TreeNode* ans = lowestCommonAncestor(root, p, q);
    cout << "LCA: " << ans->val << endl; // output: 3

    return 0;

}