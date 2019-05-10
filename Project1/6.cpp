//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	string convert(string s, int numRows) {
//
//		string *strPtr = new string[numRows];
//		string result;
//		int length = s.size();
//		if (numRows == 1)
//		{
//			return s;
//		}
//		int count = 2 * numRows - 2;
//		int i, carry;
//		for (int j = 0; j < length; j++)
//		{
//			i = j % count;
//			
//			if(i < numRows)
//			strPtr[i].push_back(s[j]);
//			else
//			{
//				strPtr[count - i].push_back(s[j]);
//			}
//
//			
//		}
//		for (int i = 0; i < numRows; i++)
//		{
//			result += strPtr[i];
//		}
//		return result;
//	}
//};
//
//int main()
//{
//	Solution Obj;
//	cout << Obj.convert("PAYPALISHIRING", 3) << endl;
//	system("pause");
//	return 0;
//}