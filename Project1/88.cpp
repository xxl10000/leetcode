//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//		int i;
//		for (int j = 0; j < n; j++)
//		{	
//			for (i = m - 1; i >= 0; i--)
//			{
//				if (nums2[j] < nums1[i])
//				{
//					nums1[i + 1] = nums1[i];
//				}
//				else
//				{
//					break;
//				}				
//			}
//			nums1[i + 1] = nums2[j];
//			m++;
//
//		}
//	
//
//	}
//};
//
//int main()
//{
//	Solution Obj;
//	vector<int> V1 = { 1, 2,3, 0, 0, 0 };
//	vector<int> V2 = { 2, 5, 6 };
//	Obj.merge(V1, 3, V2, 3);
//	cout << V1[4] << endl;
//	system("pause");
//	return 0;
//}