//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	string initial(string s)
//	{
//		int length = s.size();
//		int i = 0;
//		string result = "";
//		while (s[i] == ' ')
//		{
//			i++;
//		}
//		if ((s[i] < '0' || s[i] > '9') &&s[i] != '-' && s[i] != '+')
//		{
//			return result;
//		}
//		else
//		{
//			result += s[i];
//		}
//		for (int j = i + 1; j < length; j++)
//		{
//			if (s[j] >= '0' && s[j] <= '9' )
//			{
//				result += s[j];
//			}
//			else
//			{
//				break;
//			}
//				
//			
//		}
//		return result;
//
//	}
//	int myAtoi(string str) {
//		if (str.empty())
//		{
//			return 0;
//		}
//		string valid = initial(str);
//		if (valid == "")
//		{
//			return 0;
//		}
//		double result = 0;
//		int length = valid.size();
//		int sign = 1;
//		int flag = 0;
//		if (valid[0] == '-' )
//		{
//			sign = -1;
//		}
//		if (valid[0] == '-' || valid[0] == '+')
//		{
//			flag = 1;
//		}
//		for (int i = flag; i < length; i++)
//		{
//			result = 10 * result + valid[i] - '0';
//			if ((int)result > INT_MAX) return INT_MAX;
//			else if ((int)result < INT_MIN) return INT_MIN;
//		}
//		result *= sign;
//		if (result > INT_MAX) return INT_MAX;
//		else if (result < INT_MIN) return INT_MIN;
//		else return result;
//	}
//};
//
//int main()
//{
//	Solution Obj;
//	cout << Obj.myAtoi("-3.14159") << endl;
//	system("pause");
//	return 0;
//}