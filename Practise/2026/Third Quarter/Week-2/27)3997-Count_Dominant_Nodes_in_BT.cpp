#include <bits/stdc++.h>
using namespace std;
using ll = long long;

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
public:
    int ans = 0;
    int dfs(TreeNode* root){
        if(!root){
            return -1;
        }
        int left = dfs(root->left);
        int right = dfs(root->right);
        int maxm = max({root->val,left,right});
        if(maxm==root->val){
            ans++;
        }
        return maxm;
    }
    int countDominantNodes(TreeNode* root) {
        dfs(root);
        return ans;
    }
};