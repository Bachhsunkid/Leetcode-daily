#include<bits/stdc++.h>
using namespace std;

//Definition for a binary tree node.
struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
private:
    void dfs(TreeNode* root, vector<int>& vec) {
        if(!root) return;
        dfs(root -> left, vec);
        vec.push_back(root -> val);
        dfs(root -> right, vec);
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> vec;
        dfs(root, vec);
        return vec;
    }
};

int main(){
	TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);

    Solution solution;
    vector<int> result = solution.inorderTraversal(root);

    for(int val: result) {
        cout << val << " ";
    }
}
