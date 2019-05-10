//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	int maxSubArray(vector<int>& nums) {
//		int length = nums.size();
//		int thisSum = 0, sum = 0;
//		int Max = nums[0];
//		for (int i = 1; i < length; i++)
//		{
//			Max = max(Max, nums[i]);
//		}
//		
//		for (size_t i = 0; i < length; i++)
//		{
//			thisSum += nums[i];
//			sum = max(sum, thisSum);
//			thisSum = thisSum < 0 ? 0 : thisSum;
//		}
//		if (sum == 0)
//		{
//			sum = Max;
//		}
//		return sum;
//	}
//};
//
//int main()
//{
//	Solution Obj;
//	vector<int> V = { -2 };
//	cout << Obj.maxSubArray(V)<< endl;
//	system("pause");
//	return 0;
//}