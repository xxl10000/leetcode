//
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
///**
// * Definition for singly-linked list.
// * struct ListNode {
// *     int val;
// *     ListNode *next;
// *     ListNode(int x) : val(x), next(NULL) {}
// * };
// */
//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//	
//};
//class Solution {
//	
//public:
//	void Insert(ListNode* &P, int X)
//	{
//		ListNode * Tmp= new ListNode(X);
//		if (!Tmp)
//		{
//			cout << "Memory Insert error!\n" << endl;
//			exit(1);
//		}
//		P->next = Tmp;
//		P = Tmp;
//	
//	}
//	void IncreseBit(int &Tem, int &flag, int a, int b, ListNode *&P)
//	{
//		Tem = a + b + flag;
//		if (Tem > 9)
//		{
//			flag = 1;
//			Insert(P, (Tem)-10);
//		}
//		else
//		{
//			flag = 0;
//			Insert(P, Tem);
//		}
//	}
//	ListNode* addTwoNumbers1(ListNode* l1, ListNode* l2) {
//		ListNode* L = new ListNode(0);
//		ListNode* P = L, *TemPtr(0);
//		
//
//
//		int flag = 0;
//		int Tem;
//		while (l1 && l2)
//		{
//			TemPtr = new ListNode(0);
//			P->next = TemPtr;
//
//			Tem = l1->val + l2->val + flag;
//			if (Tem  > 9)
//			{
//				flag = 1;
//				TemPtr->val = (Tem) - 10;
//			}
//			else
//			{
//				flag = 0;
//				TemPtr->val = Tem;
//			}
//
//			l1 = l1->next;
//			l2 = l2->next;
//			P = TemPtr;
//		} 
//		while (l1)
//		{
//			TemPtr = new ListNode(0);
//			P->next = TemPtr;
//
//			Tem = l1->val +flag;
//			if (Tem > 9)
//			{
//				flag = 1;
//				TemPtr->val = (Tem)-10;
//			}
//			else
//			{
//				flag = 0;
//				TemPtr->val = Tem;
//			}
//
//			l1 = l1->next;
//			l2 = l2->next;
//			P = TemPtr;
//
//		}
//		while (l2)
//		{
//			TemPtr = new ListNode(0);
//			P->next = TemPtr;
//
//			Tem =  l2->val + flag;
//			if (Tem > 9)
//			{
//				flag = 1;
//				TemPtr->val = (Tem)-10;
//			}
//			else
//			{
//				flag = 0;
//				TemPtr->val = Tem;
//			}
//
//			l1 = l1->next;
//			l2 = l2->next;
//			P = TemPtr;
//		}
//		if (flag == 1)
//		{
//			P->next = new ListNode(1);
//		}
//		return L->next;
//
//
//	}
//	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//		ListNode* L = new ListNode(0);
//		ListNode* P = L, *TemPtr(0);
//
//		int flag = 0;
//		int Tem;
//		
//		int a, b;
//		while (l1 || l2)
//		{
//			if (l1) {
//				a = l1->val; l1 = l1->next;
//			}
//			if (l2) {
//				b = l2->val; l2 = l2->next;
//			}
//			IncreseBit(Tem, flag, a, b, P);
//			a = b = 0;
//		}
//		if (flag == 1)
//		{
//			Insert(P, 1);
//		}
//		return L->next;
//
//
//	}
//};
//int main()
//{
//	Solution Obj;
//	ListNode *A = new ListNode(2), *B = new ListNode(5);
//	ListNode *Re = Obj.addTwoNumbers(A, B);
//	cout << Re->val << endl;
//	system("pause");
//	return 0;
//}