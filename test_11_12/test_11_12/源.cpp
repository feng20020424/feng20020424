#define _CRT_SECURE_NO_WARNINGS 1

class Solution {
public:
    /**
     *
     * @param numbers int����vector
     * @param target int����
     * @return int����vector
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
     * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
     *
     *
     * @param pRoot TreeNode��
     * @return TreeNode��
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