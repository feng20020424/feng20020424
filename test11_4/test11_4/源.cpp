#define _CRT_SECURE_NO_WARNINGS 1
struct ListNode* reverseBetween(struct ListNode* head, int m, int n) {
    struct ListNode* p1 = head;
    struct ListNode* p3 = head;
    struct listNode* p2 = NULL;

    struct ListNode* v1 = head;
    struct ListNode* v2 = head;
    while (m--)
    {
        p1++;
    }
    while (n--)
    {
        p3++;
    }
    int i = n - m;
    for (int a = 0; a < i; a++)
    {
        v2 = p3;
        p3 = p1;
        p3->next = v2;
    }
    return head;
}