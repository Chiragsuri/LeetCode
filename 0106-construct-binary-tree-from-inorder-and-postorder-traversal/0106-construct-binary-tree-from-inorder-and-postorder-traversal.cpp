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
class Solution {
public:
TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
  int postStart = 0, postEnd = postorder.size() - 1;
  int inStart = 0, inEnd = inorder.size() - 1;

  map < int, int > mp;
  for (int i = inStart; i <= inEnd; i++) {
    mp[inorder[i]] = i;
  }

  return constructTree(postorder, postStart, postEnd, inorder, inStart, inEnd, mp);
}
    
TreeNode * constructTree(vector < int > & postorder, int postStart, int postEnd, 
vector < int > & inorder, int inStart, int inEnd, map < int, int > & mp) {
  if (postStart > postEnd || inStart > inEnd) return NULL;

  TreeNode * root = new TreeNode(postorder[postEnd]);
  int inRoot = mp[root -> val];
  int numsLeft = inRoot - inStart;

  root -> left = constructTree(postorder, postStart, postStart + numsLeft - 1, 
  inorder, inStart, inRoot - 1, mp);
  root -> right = constructTree(postorder, postStart + numsLeft, postEnd-1, inorder,
  inRoot + 1, inEnd, mp);

  return root;
}
};