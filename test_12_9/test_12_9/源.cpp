#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<malloc.h>
typedef struct list
{
    int val;
    struct list* next;
}list;
int main() {
    int n, i;
    scanf("%d%d", &n, &i);
    int date;
    list* head = (list*)malloc(sizeof(list));
    list* l1 = head;
    while (n--)
    {
        l1->next = (list*)malloc(sizeof(list));
        l1 = l1->next;
        scanf("%d", &date);
        l1->val = date;
        l1->next = NULL;
    }
    l1 = head->next;
    int k = 1;
    while (l1)
    {
        if (k == i)
        {
            list* l2 = (list*)malloc(sizeof(list));

            l2->val = i;
            l2->next = l1->next;
            l1->next = l2;
            break;
        }
        k++;
        l1 = l1->next;

    }
    l1 = head->next;
    while (l1)
    {
        printf("%d ", l1->val);
        l1 = l1->next;
    }

    return 0;
}