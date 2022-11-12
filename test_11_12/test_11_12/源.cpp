#define _CRT_SECURE_NO_WARNINGS 1

class Solution {
public:
    /**
     *
     * @param numbers int整型vector
     * @param target int整型
     * @return int整型vector
     */
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>v1;
        int c = 0;

        for (int a = 0; a < numbers.size(); a++)
        {


            if (numbers[a] > target && numbers[a + 1] > target) continue;
            for (int b = 0; b < numbers.size(); b++)
            {

                if (numbers[a] + numbers[b] == target && a != b)
                {
                    v1.push_back(a + 1);
                    v1.push_back(b + 1);
                    return v1;
                }
            }
        }
        return v1;
    }
};

/**
 * struct TreeNode {
 *	int val;
 *	struct TreeNode *left;
 *	struct TreeNode *right;
 *	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 * };
 */
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param pRoot TreeNode类
     * @return TreeNode类
     */
    TreeNode* Mirror(TreeNode* pRoot) {
        if (pRoot == NULL)
        {
            return NULL;
        }
        TreeNode* p = pRoot->left;
        pRoot->left = pRoot->right;
        pRoot->right = p;
        Mirror(pRoot->left);
        Mirror(pRoot->right);


        return pRoot;

    }
};