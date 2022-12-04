//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <iostream>
//#include<string>
//using namespace std;
//struct node
//{
//    int date;
//    node* next = NULL;
//};
//class List
//{
//private:
//    node* hade = new node;
//public:
//    void insert(int x, int y)
//    {
//        node* tmp = new node;
//        node* p = hade;
//        node* p2 = p->next;
//        bool find_res = false;
//        tmp->date = y;
//        while (p->next != NULL)
//        {
//            if (p2->date == x)
//            {
//                find_res = true;
//                break;
//            }
//            p = p->next;
//            p2 = p2->next;
//        }
//        if (find_res == true)
//        {
//            tmp->next = p2;
//            p->next = tmp;
//        }
//        else
//        {
//            p->next = tmp;
//            tmp->next = NULL;
//        }
//    }
//
//    void del_node(int x)
//    {
//        node* p1 = hade;
//        node* p2 = hade->next;
//
//        while (p1->next != NULL)
//        {
//            if (p2->date == x)
//            {
//                p1->next = p2->next;
//                p2->next = NULL;
//                break;
//
//            }
//            p1 = p1->next;
//            p2 = p2->next;
//        }
//
//    }
//
//    void show()
//    {
//        if (hade->next == NULL)
//        {
//            cout << "NULL";
//        }
//        else
//        {
//            node* p = hade;
//            while (p->next != NULL)
//            {
//                p = p->next;
//                cout << p->date << ' ';
//            }
//        }
//    }
//};
//int main() {
//    int n, x, y;
//    cin >> n;
//    List l1;
//    string s1;
//    while (n--)
//    {
//        cin >> s1;
//        if (s1 == "insert")
//        {
//            int a, b;
//            cin >> a >> b;
//            l1.insert(a, b);
//        }
//        if (s1 == "delete")
//        {
//            int c;
//            cin >> c;
//            l1.del_node(c);
//        }
//    }
//    l1.show();
//}

/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 *	ListNode(int x) : val(x), next(nullptr) {}
 * };
 */
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param head ListNode类
     * @param val int整型
     * @return ListNode类
     */
    ListNode* deleteNode(ListNode* head, int val) {
        ListNode* p1 = head;
        ListNode* p2 = head->next;
        while (p2 != NULL)
        {
            if (p1->val == val)
            {
                head = head->next;
                break;
            }

            if (p2->val == val)
            {
                p1->next = p2->next;
                p2->next = NULL;
                break;
            }
            p1 = p1->next;
            p2 = p2->next;
        }
        return head;
    }
};