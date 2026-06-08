#include <bits/stdc++.h>
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
public:
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int,TreeNode*>tree;
        unordered_set<int>children;
        for(auto &v:descriptions){
            int parent = v[0];
            int child = v[1];
            children.insert(child);
            if(tree.find(parent)==tree.end()){
                tree[parent]= new TreeNode(parent);
            }
            if(tree.find(child)==tree.end()){
                tree[child]= new TreeNode(child);
            }
            if(v[2]==1){
                tree[parent]->left=tree[child];
            }else{
                tree[parent]->right=tree[child];
            }
        }
        for(auto& it:tree){
            if(!children.count(it.first)){
                return it.second;
            }
        }
        return NULL;
    }
};