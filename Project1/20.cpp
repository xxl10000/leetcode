//#include<iostream>
//#include<string>
//#include<stack>
//using namespace std;
//class Solution {
//public:
//	bool isValid(string s) {
//		stack<char> S;
//		int length = s.length();
//		char Tmp;
//		for (size_t i = 0; i < length; i++)
//		{
//			switch (s[i])
//			{
//			case '(':
//			case '[':
//			case '{':S.push(s[i]); break;
//			case ')':if (!S.empty() &&S.top() != '(') return false; S.pop();  break;
//			case ']':if (!S.empty() && S.top() != '(') return false; S.pop(); break;
//			case '}':if (!S.empty() && S.top() != '(') return false; S.pop();  break;
//				
//
//			}
//		}
//		return true;
//	}
//};
//
//
//int main()
//{
//	Solution Obj;
//	cout << Obj.isValid("([({[]})]") << endl;
//	system("pause");
//	return 0;
//}