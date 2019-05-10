//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
// //Definition for singly-linked list.
// struct ListNode {
//      int val;
//      ListNode *next;
//      ListNode(int x) : val(x), next(NULL) {}
//  };
// 
//class Solution {
//public:
//	ListNode* deleteDuplicates(ListNode* head) {
//		ListNode *L = head, *P = L, *pTmp;
//		int Tmp;
//		if (!L) return NULL;
//		Tmp = L->val;
//		pTmp = L->next;
//		while (pTmp)
//		{
//			if (pTmp->val == Tmp)
//			{
//				P->next = pTmp->next;
//				delete pTmp;
//				pTmp = P->next;
//			}
//			else
//			{
//				P = pTmp;
//				Tmp = P->val;
//				pTmp = pTmp->next;
//			}
//		}
//		return L;
//
//	}
//};
//
//
//int main()
//{
//	Solution Obj;
//	cout << Obj. << endl;
//	system("pause");
//	return 0;
//}