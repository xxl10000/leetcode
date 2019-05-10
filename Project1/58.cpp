//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	int lengthOfLastWord(string s) {
//		int length = s.length();
//		while (s[--length] == ' ');
//		int count = 0;
//		int i = 0;
//		for (i = length ; i >= 0 && s[i] != ' '; i--)
//		{
//			count++;
//		}
//		return count;
//	}
//};
//
//int main()
//{
//	Solution Obj;
//	cout << Obj.lengthOfLastWord("a") << endl;
//	system("pause");
//	return 0;
//}