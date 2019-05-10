//
//#include<iostream>
//#include<string>
//
//using namespace std;
//class Solution {
//public:
//	void Func(string * &PtrS, int j1, int j0)
//	{
//		int length = PtrS[j0].size();
//		int count = 1;
//		int flag = 0;
//		for (size_t i = 0; i < length; )
//		{
//			while (i + 1 < length &&PtrS[j0][i] == PtrS[j0][i+1])
//			{
//				count++;
//				i++;
//				flag = 1;
//			}
//			
//			PtrS[j1] += to_string(count) + PtrS[j0][i];
//			
//			count = 1;
//			i++;
//			flag = 0;
//
//		}
//	
//	}
//	string countAndSay(int n) {
//		string *PtrS = new string[n];
//		if (!PtrS)
//		{
//			cout << "error!" << endl;
//			exit(1);
//		}
//		PtrS[0] = "1";
//		for (int j = 1; j < n; j++)
//		{
//			Func(PtrS, j, j - 1);
//		}
//		return PtrS[n - 1];
//	}
//};
//
//
//int main()
//{
//	Solution Obj;
//	cout << Obj.countAndSay(4) << endl;
//	system("pause");
//	return 0;
//}
//
