/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */


//[using set]

class Solution {
public:
  set<int> set;
  int findSecondMinimumValue(TreeNode* root) {
      dfs(root);
      int count=0;
      for(auto it:set){
          if(count==1)
              return it;
          count++;
      }
      return -1;
  }
  void dfs(TreeNode* root){
      if(root){
      dfs(root->left);
      set.insert(root->val);
      dfs(root->right);
      }
  }
};

/*
class Solution {
public:
  vector<int> vec;
  int findSecondMinimumValue(TreeNode* root) {
      if(root==nullptr) return 0;
      vec.push_back(root->val);
      findSecondMinimumValue(root->left);
      findSecondMinimumValue(root->right);

      sort(vec.begin(),vec.end());
      vec.erase(unique(vec.begin(),vec.end()),vec.end());
      return vec.size()>1?vec[1]:-1;
  }
}; */