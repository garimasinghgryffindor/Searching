// Level Order Traversal
// BFS
// Binary Tree

#include <iostream>
#include <queue>
using namespace std;

struct TreeNode {
int val;
TreeNode *left;
TreeNode *right;
TreeNode() : val(0), left(nullptr), right(nullptr) {}
TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


void levelOrder(TreeNode* root) {
    if(root == NULL)
        return;
    
    queue<TreeNode*> q;
    q.push(root);

    while(!q.empty()) {
        TreeNode * curr = q.front();
        q.pop();
        if(curr->left!=NULL)
            q.push(curr->left);
        if(curr->right!=NULL)
            q.push(curr->right);
        cout<<curr->val<<"  ";
    }
    cout<<endl;
}

int main()
{
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    levelOrder(root);

    return 0;
}