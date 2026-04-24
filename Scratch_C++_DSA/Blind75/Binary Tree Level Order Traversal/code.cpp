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

vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == NULL) return {};
        vector<vector<int>>ans;
        //queue
        queue<TreeNode*>q;
        q.push(root);

        //iterate
        while(!q.empty())
        {
            int s = q.size();
            vector<int>lvl;

            for(int i = 0 ; i < s; i++)
            {
                auto temp = q.front();
                q.pop();
                lvl.push_back(temp->val);
                if(temp->left != NULL) q.push(temp->left);
                if(temp->right != NULL) q.push(temp->right);
            }
            ans.push_back(lvl);
        }
        return ans;
    }

int main()
{

    TreeNode *p = new TreeNode(3);
    p->left = new TreeNode(9);
    p->right = new TreeNode(20);
    p->right->left = new TreeNode(15);
    p->right->right = new TreeNode(7);

    vector<vector<int>>res = levelOrder(p);

    for(auto i : res)
    {
        for(auto j : i)
        {
            cout<<j<<" ";
        }
    }

    return 0;
}