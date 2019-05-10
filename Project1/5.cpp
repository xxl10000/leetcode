//#include<iostream>
//#include<string>
//using namespace std;
//class Solution {
//public:
//	/*bool Palindromic(string s)
//	{
//		int length = s.size();
//		for (int i = 0, j = length - 1; i < j; i++, j--)
//		{
//			if (s[i] != s[j])
//			{
//				return false;
//			}
//		}
//		return true;
//	}
//	string longestPalindrome(string s) {
//		size_t First = 0, Last = s.size() - 1;
//		int N = s.size();
//		string Tem;
//		while (N > 1)
//		{
//			for (int i = 0; i <= s.size() - N; i++)
//			{
//				Tem = s.substr(i, N);
//				if (Palindromic(Tem))
//				{
//					return Tem;
//				}
//			}
//			N--;
//		}
//		Tem = s[0];
//		return Tem;
//
//
//	}*/
//	/*string longPalin(string s, int medium)
//	{
//		int length = s.size();
//		string sTmp;
//		int count = 1, tmp = 0;
//		for(int i = medium -1, j = medium + 1; i >= 0&&j < length; i--, j++)
//		{
//			if (s[i] != s[j])
//			{
//				sTmp = s.substr(i + 1, count);
//				tmp = count;
//				break;
//			}
//			else
//			{
//				count += 2;
//			}
//		}
//		count = 1;
//		for (int i = medium , j = medium + 1; i >= 0 && j < length; i--, j++)
//		{
//			if (s[i] != s[j])
//			{
//				if (count > tmp)
//				{
//					sTmp = s.substr(i + 1, count);
//					tmp = count;
//				}
//				
//				break;
//			}
//			else
//			{
//				count += 2;
//			}
//		}
//		count = 1;
//		for (int i = medium - 1, j = medium; i >= 0 && j < length; i--, j++)
//		{
//			if (s[i] != s[j])
//			{
//				if (count > tmp)
//				{
//					sTmp = s.substr(i + 1, count);
//					tmp = count;
//				}
//
//				break;
//			}
//			else
//			{
//				count += 2;
//			}
//		}
//		
//		return sTmp;
//	}
//	string longestPalindrome(string s) 
//	{
//
//		if (s.empty())
//		{
//			return false;
//		}
//		int sum = 1;
//		int length = s.size();
//		int medium = length/2;
//		int i = medium, j = medium + 1;
//		string result, tmp;
//		while (i >= 0)
//		{
//			tmp = longPalin(s, i);
//			if (tmp.size() >= sum)
//			{
//				result = tmp;
//				sum = tmp.size();
//			}
//			i--;
//		}
//		while (j < length)
//		{
//			tmp = longPalin(s, j);
//			if (tmp.size() > sum)
//			{
//				result = tmp;
//				sum = tmp.size();
//			}
//			j++;
//		}
//		return result;
//
//	}*/
//	string Func(string s, int low, int high)
//	{
//		int count = high - low - 1;
//		int length = s.size();
//		int i, j;
//		for (i = low, j = high; i >= 0 && j < length; i--, j++)
//		{
//			if (s[i] != s[j])
//			{
//				return s.substr(i + 1, count);
//			}
//			else
//			{
//				count += 2;
//			}
//		}
//		return s.substr(i + 1, count);
//
//	}
//	string longestPalindrome(string s)
//	{
//		int length = s.size();
//		int sum = 0;
//		string result, tmp;
//		for (int i = 0; i < length; i++)
//		{
//			tmp = Func(s, i - 1, i + 1);
//			if (tmp.size() > sum)
//			{
//				sum = tmp.size();
//				result = tmp;
//			}
//			if (i + 1 < length && s[i] == s[i + 1])
//			{
//				tmp = Func(s, i - 1, i + 2);
//				if (tmp.size() > sum)
//				{
//					sum = tmp.size();
//					result = tmp;
//				}
//			}
//			
//
//		}
//		return result;
//	}
//
//	
//};
////first, time too long;
//int main()
//{
//	Solution obj;
//	cout << obj.longestPalindrome("babad") << endl;
//	cout << obj.longestPalindrome("lcnvoknqgejxbfhijmxglisfzjwbtvhodwummdqeggzfczmetrdnoetmcydwddmtubcqmdjwnpzdqcdhplxtezctvgnpobnnscrmeqkwgiedhzsvskrxwfyklynkplbgefjbyhlgmkkfpwngdkvwmbdskvagkcfsidrdgwgmnqjtdbtltzwxaokrvbxqqqhljszmefsyewwggylpugmdmemvcnlugipqdjnriythsanfdxpvbatsnatmlusspqizgknabhnqayeuzflkuysqyhfxojhfponsndytvjpbzlbfzjhmwoxcbwvhnvnzwmkhjxvuszgtqhctbqsxnasnhrusodeqmzrlcsrafghbqjpyklaaqximcjmpsxpzbyxqvpexytrhwhmrkuybtvqhwxdqhsnbecpfiudaqpzsvfaywvkhargputojdxonvlprzwvrjlmvqmrlftzbytqdusgeupuofhgonqoyffhmartpcbgybshllnjaapaixdbbljvjomdrrgfeqhwffcknmcqbhvulwiwmsxntropqzefwboozphjectnudtvzzlcmeruszqxvjgikcpfclnrayokxsqxpicfkvaerljmxchwcmxhtbwitsexfqowsflgzzeynuzhtzdaixhjtnielbablmckqzcccalpuyahwowqpcskjencokprybrpmpdnswslpunohafvminfolekdleusuaeiatdqsoatputmymqvxjqpikumgmxaxidlrlfmrhpkzmnxjtvdnopcgsiedvtfkltvplfcfflmwyqffktsmpezbxlnjegdlrcubwqvhxdammpkwkycrqtegepyxtohspeasrdtinjhbesilsvffnzznltsspjwuogdyzvanalohmzrywdwqqcukjceothydlgtocukc") << endl;
//	
//	system("pause");
//	return 0;
//}
