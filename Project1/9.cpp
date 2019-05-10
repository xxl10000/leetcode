//#include<iostream>
//#include<string>
//
//using namespace std;
//class Solution {
//public:
//	bool isPalindrome(int x) {
//		if (x < 0)
//		{
//			return false;
//		}
//		int *A = new int[32]{};
//		int i;
//		for (i = 0; x > 0; i++)
//		{
//			A[i] = x % 10;
//			x /= 10;
//		}
//		for (int j = 0; j < i; j++)
//		{
//			if (A[j] != A[i - j - 1])
//			{
//				return false;
//			}
//		}
//		return true;
//
//	}
//};
//
//
//int main()
//{
//	Solution Obj;
//	cout << Obj.isPalindrome(-121) << endl;
//	system("pause");
//	return 0;
//}