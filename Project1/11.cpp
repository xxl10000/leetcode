//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	/*int maxArea(vector<int>& height) {
//		int sum = 0;
//		int length = height.size();
//		for (int i = 0; i < length; i++)
//		{
//			for (int j = i + 1; j < length; j++)
//			{
//				sum = max(sum, (j - i) * min(height[i], height[j]));
//			}
//		}
//		return sum;
//
//	}*/
//	int recurMaxArea(vector<int>& height, int low, int high) {
//		
//		if (low >= high)
//		{
//			return 0;
//		}
//		
//		int medium = (low + high) / 2;
//		int leftSum = 0, rightSum = 0, tmp;
//		for (int i = medium - 1; i >= low; i--)
//		{
//			tmp = (medium - i) * min(height[medium], height[i]);
//			if (tmp > leftSum)
//			{
//				leftSum = tmp;
//			}
//			else break;
//		}
//		for (int i = medium + 1; i <= high; i++)
//		{
//			tmp = (i = medium) * min(height[medium], height[i]);
//			if (tmp > rightSum)
//			{
//				rightSum = tmp;
//			}
//			else break;
//		}
//
//		
//		return max({ recurMaxArea(height, 0, medium - 1), recurMaxArea(height, medium + 1, height.size()), leftSum + rightSum });
//	}
//	int maxArea(vector<int>& height) {
//		//return recurMaxArea(height, 0, height.size() - 1);
//		int length = height.size();
//		int sum = 0;
//		for (int i = 0, j = length - 1; i <= j; )
//		{
//			sum = max(sum, (j - i) * min(height[i], height[j]));
//			if (height[i] > height[j])
//			{
//				j--;
//			}
//			else
//			{
//				i++;
//			}
//		}
//		return sum;
//	}
//
//
//};
//
//
//int main()
//{
//	Solution Obj;
//	vector<int> v = { 1, 8, 6, 2,5, 4, 8, 3, 7 };
//	cout << Obj.maxArea(v)<< endl;
//	system("pause");
//	return 0;
//}