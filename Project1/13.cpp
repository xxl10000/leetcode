//#include<iostream>
//#include<string>
//
//using namespace std;
//class Solution {
//public:
//	int Value(char op)
//	{
//		switch (op)
//		{
//		case 'I':return 1; 
//		case 'V': return 5;
//		case 'X': return 10;
//		case 'L': return 50;
//		case 'C': return 100;
//		case 'D': return 500;
//		case 'M': return 1000;
//		}
//	}
//	int romanToInt(string s) {
//		int Result = 0;
//		int length = s.size();
//		for (size_t i = 0; i < length; i++)
//		{
//			if(i + 1 < length)
//			switch (s[i])
//			{
//			case 'I': if (s[i + 1] == 'V' || s[i + 1] == 'X') Result -= 2; break;
//			case 'X':if (s[i + 1] == 'L' || s[i + 1] == 'C') Result -= 20; break;
//			case 'C':if (s[i + 1] == 'D' || s[i + 1] == 'M') Result -= 200; break;
//			}
//			Result += Value(s[i]);
//		}
//		return Result;
//
//	}
//};
//
//
//int main()
//{
//	Solution Obj;
//	cout << Obj.romanToInt("MCMXCIV") << endl;
//	system("pause");
//	return 0;
//}