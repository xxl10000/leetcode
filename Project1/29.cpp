//#include<string>
//using namespace std;
//class Solution {
//public:
//	int strStr(string haystack, string needle) {
//		int length1 = haystack.size(), length2 = needle.size();
//		if (length2 == 0)
//		{
//			return 0;
//		}
//		if (length1== 0)
//		{
//			return -1;
//		}
//		int i = 0, j = 0;
//		for (j = 0; j < length1 - length1 + 1; j++)
//		{
//			for (int k = 0; (k + j < length1 && i < length2) &&haystack[k + j]== needle[i]; k++, i++)
//			{
//				;
//			}
//			if (i == length2)
//			{
//				return j;
//			}
//			else
//			{
//				i = 0;
//			}
//			/*while (i < length2 && j <length1 && haystack[j++] == needle[i++] )
//			{
//				;
//			}
//			if (i == length2)
//			{
//				return j - length2;
//			}
//			else
//			{
//				i = 0;
//			}*/
//		}
//		return -1;
//	}
//};