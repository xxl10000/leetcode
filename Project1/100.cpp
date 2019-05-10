//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////Definition for a binary tree node.
// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// };
//
//class Solution {
//public:
//	bool isSameTree(TreeNode* p, TreeNode* q) {
//		if (p == NULL && q == NULL)
//		{
//			return true;
//		}
//		else
//		{
//			if (p == NULL || q == NULL)
//			{
//				return false;
//			}
//			return p->val == q->val ? isSameTree(p->left, q->left) && isSameTree(p->right, q->right) : false;
//		}
//
//
//	}
//};
//
//int main()
//{
//	Solution Obj;
//	cout << Obj. << endl;
//	system("pause");
//	return 0;
//}