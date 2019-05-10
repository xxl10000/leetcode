//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//	vector<int> plusOne(vector<int>& digits) {
//		int length = digits.size();
//		int carry = 1;
//		for (int i = length - 1; i > -1; i--)
//		{
//			
//			if (digits[i] + carry > 9)
//			{
//				carry = 1;
//				digits[i] = (digits[i] + carry) - 10;
//			}
//			else
//			{
//				
//				digits[i] = (digits[i] + carry);
//				carry = 0;
//			}
//			
//		}
//		if (carry)
//		{
//			digits.insert(digits.begin(), carry);
//		}
//		return digits;
//	}
//};
//
//
//int main()
//{
//	Solution Obj;
//	vector<int> V = { 1,2,3 };
//	cout << Obj.plusOne(V)[2] << endl;
//	system("pause");
//	return 0;
//}