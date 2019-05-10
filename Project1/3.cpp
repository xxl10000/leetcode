//#include<string>
//#include<iostream>
//
//#include<algorithm>
//using namespace std;
//#include<unordered_map>
//class Solution {
//public:
//	int lengthOfLongestSubstring1(string s)
//	{
//		int Sum = 0, thisSum = 0, length = s.size();
//		string Tmp;
//		size_t Pos;
//		//queue<char> V;
//		for (size_t i = 0; i < length; i++)
//		{
//			if (Tmp.find(s[i]) == string::npos)
//			{
//				Tmp += s[i];
//				thisSum = Tmp.size();
//				if (thisSum > Sum)
//				{
//					Sum = thisSum;
//				}
//			}
//			else
//			{
//				Pos = Tmp.find(s[i]);
//				Tmp.erase(0, Pos + 1);
//				Tmp += s[i];
//			}
//
//		}
//		return Sum;
//
//
//
//	}
//	int lengthOfLongestSubstring3(string s)
//	{
//		int Sum = 0, thisSum = 0, length = s.size();
//		unordered_map<char,int> MyMap;
//		int begin = 0, end = 0;
//		for (size_t i = 0; i < length; )
//		{
//			if (MyMap.find(s[i]) == MyMap.end())
//			{
//				MyMap[s[i++]] = i;
//				thisSum = MyMap.size();
//				Sum = thisSum > Sum ? thisSum : Sum;	
//			}
//			else
//			{
//				MyMap.erase(s[begin++]);		
//			}
//		}
//		return Sum;
//	}
//	int lengthOfLongestSubstring(string s)
//	{
//		int Sum = 0, length = s.size();
//		unordered_map<char, int> MyMap;
//		int begin = 0;
//		for (int i = 0; i < length; i++)
//		{
//			if (MyMap.find(s[i]) != MyMap.end())
//			{
//				begin = max(begin, MyMap[s[i]]);
//			}
//			Sum = max(Sum, i - begin );
//			MyMap[s[i]] = i;
//			
//		}
//		return Sum;
//	}
//	int lengthOfLongestSubstring5(string s)
//	{
//		int Sum = 0, thisSum = 0, length = s.size();
//		unordered_map<char, int> MyMap;
//		auto Iter = MyMap.begin();
//		int begin = 0, end = 0;
//		for (size_t i = 0; i < length; i++)
//		{
//			Iter = MyMap.find(s[i]);
//
//			if (Iter == MyMap.end())
//			{
//				MyMap[s[i]] = i;
//				thisSum = MyMap.size();
//				Sum = thisSum > Sum ? thisSum : Sum;
//
//			}
//			else
//			{
//				end = Iter->second;
//				for (int j = begin; j < end + 1; j++)
//				{
//					MyMap.erase(s[j]);
//				}
//				begin = end + 1;
//				MyMap[s[i]] = i;
//			}
//		}
//		return Sum;
//	}
//	//int lengthOfLongestSubstring(string s)
//	//{
//	//	int Sum = 0, thisSum = 0, length = s.size();
//	//	size_t Pos;
//	//	//queue<char> V;
//	//	unordered_map<char, int> MyMap;
//	//	auto Iter = MyMap.begin();
//	//	auto Begin = MyMap.begin();
//	//	for (size_t i = 0; i < length; i++)
//	//	{
//	//		Iter = MyMap.find(s[i]);
//
//	//		if (Iter == MyMap.end())
//	//		{
//	//			MyMap[s[i]] = i;
//	//			thisSum = MyMap.size();
//	//			Sum = thisSum > Sum ? thisSum : Sum;
//
//	//		}
//	//		else
//	//		{
//	//			Iter = MyMap.find(s[i]);
//	//			Begin = MyMap.begin();
//	//			int Tem = Iter->second;
//	//			for (Begin = MyMap.begin(); Begin != MyMap.end(); Begin++)
//	//			{
//	//				cout << Begin->second << endl;
//	//				if (Begin->second <= Tem)
//	//				{
//	//					cout << "<=" << Tem << endl;
//	//					MyMap.erase(Begin->first);
//	//					if (MyMap.size() == 0)
//	//					{
//	//						break;
//	//					}
//	//				}
//	//				
//	//	
//	//			}
//	//			//MyMap.erase(Begin, Iter);
//	//			cout << endl;
//	//			//Tmp.erase(0, Pos + 1);
//	//			MyMap[s[i]] = i;
//
//	//		}
//
//	//	}
//	//	return Sum;
//	//}
//	int lengthOfLongestSubstring2(string s)
//	{
//		size_t Sum = 0, thisSum = 0, length = s.size();
//		string Tmp;
//		size_t Pos;
//		//queue<char> V;
//		for (int i = 0; i < length; i++)
//		{
//			if (Tmp.find(s[i]) == string::npos)
//			{
//				Tmp += s[i];
//				Sum = max(Sum, Tmp.size());
//			}
//			else
//			{
//				Pos = Tmp.find(s[i]);
//				Tmp = Tmp.substr(Pos + 1);
//				Tmp += s[i];
//			}
//
//		}
//		return Sum;
//	}
//
//};
//int main()
//{
//	Solution Obj;
//	cout << Obj.lengthOfLongestSubstring(" ") << endl;
//	system("pause");
//	return 0;
//}
