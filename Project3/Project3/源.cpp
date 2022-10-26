#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main()
{
	class Solution {
	public:
		ListNode* ReverseList(ListNode* pHead)
		{
			ListNode* p;
			ListNode* q = NULL;
			while (pHead != NULL)
			{
				p = pHead->next;
				pHead->next = q;
				q = pHead;
				pHead = p;
			}
			return q;
		}
	};
	// class Solution {
	// public:
	//     ListNode* ReverseList(ListNode* pHead) {
	//         ListNode* tmp;
	//         ListNode* parent = NULL;
	//         while(pHead!=NULL){
	//             tmp = pHead->next;
	//             pHead->next = parent;
	//             parent = pHead;
	//             pHead = tmp;
	//         }
	//         return parent;
	//     }
	// };
	return 0;
}