///**
// * Definition for a binary tree node.
// * struct TreeNode {
// *     int val;
// *     TreeNode *left;
// *     TreeNode *right;
// *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// * };
// */
//class Solution {
//public:
//	bool isMySymmetric(TreeNode* ltree, TreeNode* rtree)
//	{
//		if (ltree == NULL && rtree == NULL)
//		{
//			return true;
//		}
//		else if (ltree == NULL || rtree == NULL)
//		{
//			return false;
//		}
//		else return ltree->val == rtree->val &&isMySymmetric(ltree->left, rtree->right) && isMySymmetric(ltree->right, rtree->left);
//	}
//	bool isSymmetric(TreeNode* root) {
//		if (!root)
//		{
//			return true;
//		}
//		else
//		{
//			if (root->left == NULL && root->right == NULL)
//			{
//				return true;
//			}
//			else if (root->left == NULL || root->right == NULL)
//			{
//				return false;
//			}
//			else return isMySymmetric(root->left, root->right);
//		}
//	}
//};