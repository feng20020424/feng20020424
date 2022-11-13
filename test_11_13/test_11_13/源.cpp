#define _CRT_SECURE_NO_WARNINGS 1
//class Solution {
//public:
//    int MoreThanHalfNum_Solution(vector<int> numbers) {
//        sort(numbers.begin(), numbers.end());
//        return numbers[numbers.size() / 2];
//    }
//};
class Solution
{
public:
    void push(int node) {
        stack1.push(node);

    }

    int pop() {
        int a = 0;
        if (stack2.empty())
        {
            while (!stack1.empty())
            {
                a = stack1.top();
                stack2.push(a);
                stack1.pop();
            }
        }
        a = stack2.top();
        stack2.pop();
        return a;
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};