#include<bits/stdc++.h>
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

void inorder(TreeNode* root, vector<int>& ans)
    {
         //inorder traversal of a BST-> gives the elements in inc sorted order 
        if(root == NULL) return;
        //inorder -> LNR
        inorder(root->left, ans);
        ans.push_back(root->val);
        inorder(root->right, ans);

    }

bool isValidBST(TreeNode* root) {
        vector<int>ans;
        inorder(root, ans);
        int check = ans[0];
        bool res = true;
        for(int i = 1; i< ans.size(); i++)
        {
            if(check >= ans[i])
            {
                res = false;
            }
            check = ans[i];
        }

        return res;

    }


int main(){

    TreeNode* root = NULL;

    root = insert(root, 6);
    root = insert(root, 3);
    root = insert(root, 8);
    root = insert(root, 1);
    root = insert(root, 4);

    bool ans = isValidBST(root);
    cout << "LCA: " << ans<< endl; 

    return 0;

}