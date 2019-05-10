//
//#include<iostream>
//#include<vector>
//#include<string>
//
//using namespace std;
//class Solution {
//public:
//	//int removeDuplicates(vector<int>& nums) {
//	//	int count = 0;
//	//	if (nums.empty())
//	//	{
//	//		return 0;
//	//	}
//	//	int Tem = nums[0];
//	//	count++;
//	//	auto It = nums.begin();
//	//	//auto TemIt = It;
//	//	int i = nums.back();
//	//	for (It++; It != nums.end(); It++ )
//	//	{
//	//		while (*It == Tem)
//	//		{
//	//			nums.erase(It);
//	//			
//	//		}
//	//		
//	//		{
//	//			count++;
//	//			Tem = *It;
//	//			
//	//		}
//	//		
//	//		
//	//	}
//	//	
//	//	return count;
//	//}
//	
//		int removeDuplicates(vector<int>& nums) {
//			int i = 0;
//			
//			int length = nums.size();
//			if (length == 0)
//			{
//				return 0;
//			}
//			for (int j = 1; j < length; j++)
//			{
//				if (nums[i] != nums[j]) nums[++i] = nums[j];
//			}
//			return i ;
//		};
//	
//};
//
//
//int main()
//{
//	Solution Obj;
//	vector<int> V;
//	V.push_back(1);
//	V.push_back(1);
//	V.push_back(2);
//	cout << Obj.removeDuplicates(V) << endl;
//	system("pause");
//	return 0;
//}