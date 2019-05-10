//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	int mySqrt1(int x) {
//		long x1 = x;
//		int length = x1;
//		long i = 0;
//		long value = 0;
//		for (i = 0; i <= length; i++)
//		{
//			value += 2 * i + 1;
//			if (value < x1)
//			{
//				continue;
//			}
//			else if (value > x1)
//			{
//				return i ;
//			}
//			else return i + 1;
//		}
//		return i;
//
//	}
//
//	int mySqrt(int x)
//	{
//		if (x== 0 || x == 1) {
//			return x;
//		}
//		long i =1 , quadratic, Tem;
//		int tmp = i;
//		/*quadratic = i * i;
//		Tem = quadratic + 2 * i + 1;
//		int flag = 0;*/
//
//		while (i * i <= x && (i + 1) * (i + 1) < x || i * i >= x && (i * 1) *(i + 1)>x)
//		{
//			i = (i + x / i) / 2;
//			if (tmp == i)
//			{
//				break;
//			}
//			else
//			{
//				tmp = i;
//			}
//			/*quadratic = Tem;
//			Tem = quadratic + 2 * i + 1;
//			flag = 1;*/
//		}
//
//		return i;
//	}
//};
//
//
//int main()
//{
//	Solution Obj;
//	cout << Obj.mySqrt(8) << endl;
//	system("pause");
//	return 0;
//}