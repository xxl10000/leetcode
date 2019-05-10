//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//class Solution {
//public:
//	string longestCommonPrefix(vector<string>& strs) {
//		string Tmp{ "" };
//		
//		int length1 = strs.size();
//		if (!strs.size())
//		{
//			return Tmp;
//		}
//		int j;
//		size_t length2 = strs[0].length();
//		for (int i = 1; i < length1; i++)
//		{
//			length2 = min(length2, strs[i].length());
//		}
//		for (int i = 0; i < length2; i++)
//		{
//			
//			for (j = 1; j < length1; j++)
//			{
//				if (strs[j - 1][i] != strs[j][i])
//				{
//					return Tmp;
//				}
//			}
//			Tmp += strs[j - 1][i];
//		}
//		return Tmp;
//	}
//};
//
//
//int main()
//{
//	Solution Obj;
//	vector<string> strs;
//	/*strs.push_back("");
//	strs.push_back("racecar");
//	strs.push_back("car");*/
//	cout << Obj.longestCommonPrefix(strs) << endl;
//	system("pause");
//	return 0;
//}