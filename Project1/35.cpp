//#include<vector>
//#include<iostream>
//using namespace std;
//class Solution {
//public:
//	int searchInsert(vector<int>& nums, int target) {
//		int high = nums.size() - 1, low = 0;
//		int medium = (high + low) / 2;
//		int i = 0;
//		while (low < high)
//		{
//			if (nums[medium] < target)
//			{
//				low = medium + 1;
//				medium = (low + high) / 2;
//			}
//			else if (nums[medium] > target)
//			{
//				high = medium - 1;
//				medium = (low + high) / 2;
//			}
//			else return medium;
//			
//			
//		}
//		return medium + 1;
//	}
//};
//int main()
//{
//	Solution obj;
//	vector<int> V{ 1, 3, 5, 6 };
//	cout << obj.searchInsert(V, 2) << endl;
//	system("pause");
//	return 0;
//}