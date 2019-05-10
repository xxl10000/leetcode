//#include<iostream>
//#include<limits>
//using namespace std;
//class Solution {
//public:
//	int reverse(int x) {
//		long Result = 0;
//		if (x == 0)
//		{
//			return 0;
//		}
//		int flag = x < 0 ? -1 : 1;
//		long x1 = x > 0 ? x : -x;
//		int *A = new int[32]{  };
//		while (x1 % 10 == 0)
//		{
//			x1 /= 10;
//		}
//		int i;
//		for (i = 0; x1 > 0; i++)
//		{
//
//			A[i] = x1 % 10;
//			x1 /= 10;
//		}
//
//		/*while (A[i] == 0)
//		{
//			i--;
//		}*/
//
//		for (int j = 0; j < i; j++)
//		{
//			Result = Result * 10 + A[j];
//		}
//		Result = Result * flag;
//		if (Result > INT_MAX || Result < INT_MIN)
//		{
//			return 0;
//		}
//		return Result;
//	}
//};
//int main()
//{
//	Solution obj;
//	cout << obj.reverse(-123)<< endl;
//	system("pause");
//	return 0;
//}