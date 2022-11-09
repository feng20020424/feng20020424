#define _CRT_SECURE_NO_WARNINGS 1
//class Solution {
//public:
//    bool hasCycle(ListNode* head) {
//        ListNode* p1, * p2;
//        p1 = head;
//        p2 = head;
//        while (p2 != NULL && p2->next != NULL)
//        {
//            p1 = p1->next;
//            p2 = p2->next->next;
//            if (p1 == p2)
//            {
//                return true;
//            }
//        }
//        return false;
//    }
//};


//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     *
//     * @param pHead ListNode类
//     * @param k int整型
//     * @return ListNode类
//     */
//    ListNode* FindKthToTail(ListNode* pHead, int k) {
//
//
//        ListNode* p1, * p2, * p3;
//        p1 = pHead;
//        p2 = pHead;
//        p3 = pHead;
//
//        if (p1 == NULL)
//        {
//            return NULL;
//        }
//        int n = 1;
//        while (p3->next != NULL)
//        {
//            p3 = p3->next;
//            n++;
//        }
//        if (k > n)
//        {
//            return NULL;
//        }
//        while (k--)
//        {
//            p1 = p1->next;
//        }
//        while (p1 != NULL)
//        {
//            p1 = p1->next;
//            p2 = p2->next;
//        }
//        return p2;
//
//    }
//};

class Solution {
public:
	ListNode* FindFirstCommonNode(ListNode* pHead1, ListNode* pHead2) {
		if (pHead1 == NULL || pHead2 == NULL)
		{
			return NULL;
		}
		ListNode* p1, * p2;
		p1 = pHead1;
		p2 = pHead2;
		int m = 1, n = 1;
		while (p1->next != NULL)
		{
			p1 = p1->next;
			m++;
		}
		while (p2->next != NULL)
		{
			p2 = p2->next;
			n++;
		}
		for (p1 = pHead1; m > n; m--)
		{
			p1 = p1->next;
		}
		for (p2 = pHead2; m < n; n--)
		{
			p2 = p2->next;
		}

		while (p1->next != NULL && p1 != p2)
		{
			p1 = p1->next;
			p2 = p2->next;
		}
		if (p1->val == p2->val)
			return p1;
		else
			return NULL;
	}
};