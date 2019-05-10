//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//// for sometimes, just the al
//class Solution {
//public:
//	string change(int i, int value)
//	{
//		char a[4][2] = { {'I', 'V'}, {'X', 'L'}, {'C', 'D'},{'M'} };
//		/*
//		if (value < 4)
//		{
//			string s(a[i][0], value);
//			return s;
//		}
//		else if (value > 5 && value < 9)
//		{
//			string s(a[i][1],1), tmp(a[i][0], value);
//			return s + tmp;
//			
//		}*/
//		string s;
//		
//		switch(value)
//		{
//		case 1: s += a[i][0]; break;
//		case 2: s += a[i][0]; s += a[i][0]; break;
//		case 3: s += a[i][0]; s += a[i][0]; s += a[i][0]; break;
//		case 4: s += a[i][0]; s += a[i][1]; break;
//		case 5: s += a[i][1]; break;  // too more: s += a[i][0];
//		case 6: s += a[i][1]; s += a[i][0]; break; //ignore the break;
//		case 7: s += a[i][1]; s += a[i][0]; s += a[i][0]; break;
//		case 8:s += a[i][1]; s += a[i][0]; s += a[i][0]; s += a[i][0]; break;
//		case 9: s += a[i][0]; s += a[i + 1][0]; break;
//		}
//		return s;
//
//	}
//	string intToRoman(int num) {
//		string res;
//		int digit = 0;
//		int tmp = num;
//		for (; tmp > 0; digit++)
//		{
//			tmp /= 10;
//		}
//		
//		for (int i = digit; i > 0; i--)
//		{
//			tmp = num / pow(10, i- 1);   // corret: digit to i
//			res += change(i - 1, tmp);
//			num -= tmp * pow(10, i - 1); // ignore at first
//		}
//		return res;
//
//	}
//};
//
//int main()
//{
//	Solution Obj;
//	cout << Obj.intToRoman(1994) << endl;
//	system("pause");
//	return 0;
//}