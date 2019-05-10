//#include<iostream>
//#include<string>
//
//using namespace std;
//
// // Definition for singly-linked list.
// struct ListNode {
//      int val;
//      ListNode *next;
//      ListNode(int x) : val(x), next(NULL) {}
//  };
//
//class Solution {
//public:
//	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
//		ListNode *L = new ListNode(0);
//		if (!L)
//		{
//			cout << "error!\n";
//			exit(1);
//		}
//		ListNode *P = L;
//		int Tem;
//		while (l1 && l2)
//		{
//			if (l1->val >= l2->val)
//			{
//				Tem = l2->val;
//				l1 = l1->next;
//			}
//			else
//			{
//				Tem = l1->val;
//				l2 = l2->next;
//			}
//			P->next = new ListNode(Tem);
//
//			if (!P)
//			{
//				cout << "error2!";
//				exit(1);
//			}
//			
//			
//			P = P->next;
//		}
//		while (l1)
//		{
//			P->next = new ListNode(l1->val);
//			if (!P)
//			{
//				cout << "error2!";
//				exit(1);
//			}
//			l1 = l1->next;
//			//l2 = l2->next;
//			P = P->next;
//		}
//		while (l2)
//		{
//			P->next = new ListNode(l2->val);
//			if (!P)
//			{
//				cout << "error2!";
//				exit(1);
//			}
//			//l1 = l1->next;
//			l2 = l2->next;
//			P = P->next;
//		}
//
//
//		return L->next;
//
//	}
//};
//
//int main()
//{
//	Solution Obj;
//	cout << Obj.mergeTwoLists->val << endl;
//	system("pause");
//	return 0;
//}