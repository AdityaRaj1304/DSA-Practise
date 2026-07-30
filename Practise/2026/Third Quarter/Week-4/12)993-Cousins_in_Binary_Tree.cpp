#include <bits/stdc++.h>
using namespace std;
using ll = long long;

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
    bool isCousins(TreeNode* root, int x, int y) {
        queue<TreeNode*>q;
        q.push(root);
        bool first = false, second = false;
        while(!q.empty()){
            int size = q.size();
            for(int i =0;i<size;i++){
                TreeNode*curr=q.front();
                q.pop();
                if(curr->val==x){
                    first = true;
                }
                if(curr->val==y){
                    second = true;
                }
                if(curr->left && curr->right){
                    if((curr->left->val==x && curr->right->val==y)&&(curr->left->val==y && curr->right->val==x)){
                        return false;
                    }
                }
                if(curr->left!=NULL){
                    q.push(curr->left);
                }
                if(curr->right!=NULL){
                    q.push(curr->right);
                }
            }
            if(first&&second){
                return true;
            }
        }
        return false;
    }
};

