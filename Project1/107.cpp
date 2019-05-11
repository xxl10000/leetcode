#include<iostream>
#include<string>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;


// Definition for a binary tree node.
 struct TreeNode {
    int val;
     TreeNode *left;
    TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
public:
	/*vector<vector<int>> levelOrderBottom(TreeNode* root) {
		queue<TreeNode *> q;
		vector<vector<int>> res, tmp;
		vector<int> vals;
		int depth = 0;
		if (!root) return res;
		q.push(root);
		while (!q.empty())
		{
			for (int i = 0; i <pow(2, depth); i++)
			{
				if (root)
				{
					q.push(root->left);
					q.push(root->right);
					vals.push_back(root->val);
				}
				
				if (!q.empty())
				{
					q.pop();
					if(!q.empty())
					root = q.front();
				}
					
			}

			res.push_back(vals);
			vals.clear();
			depth++;
		}
		for (int i = res.size() - 1 ; i >= 0 ; i--)
		{
			if(res[i].size())
			tmp.push_back(res[i]);
		}
		return tmp;
	}*/
	vector<vector<int>> levelOrderBottom(TreeNode* root) {
		queue<TreeNode *> q;
		vector<vector<int>> res, tmp;
		vector<int> vals;
		int depth = 0;
		if (!root) return res;
		q.push(root);
		while (!q.empty())
		{
			
		}
		for (int i = res.size() - 1; i >= 0; i--)
		{
			if (res[i].size())
				tmp.push_back(res[i]);
		}
		return tmp;
	}
};

int main()
{
	Solution Obj;
	TreeNode root(3);
	root.left = new TreeNode(9);
	root.right = new TreeNode(20);
	root.right->left = new TreeNode(15);
	root.right->right = new TreeNode(7);
	vector<vector<int>> v = Obj.levelOrderBottom(&root);
	for (int i = 0; i < v.size(); i++)
	{
		for (int j = 0; j < v[i].size(); j++)
		{
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}