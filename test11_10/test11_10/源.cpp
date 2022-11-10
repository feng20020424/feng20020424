#define _CRT_SECURE_NO_WARNINGS 1
//
//class Solution {
//public:
//    /**
//     *
//     * @param root TreeNode��
//     * @param sum int����
//     * @return bool������
//     */
//    bool hasPathSum(TreeNode* root, int sum) {
//
//        if (root == NULL)
//            return false;
//        if (root->val == sum && root->left == NULL && root->right == NULL)
//            return true;
//        return hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum - root->val);
//
//    }
//};
//class Solution {
//public:
//    /**
//     *
//     * @param root TreeNode��
//     * @return int����
//     */
//    int maxDepth(TreeNode* root) {
//        if (root == NULL) return 0;
//        return max(maxDepth(root->left), maxDepth(root->right)) + 1;
//    }
//};
class Solution {
public:
    /**
     * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
     *
     *
     * @param root TreeNode��
     * @return int����vector
     */
    void ca(TreeNode* root, vector<int>& v1)
    {
        if (root == NULL)
        {
            return;
        }
        ca(root->left, v1);
        v1.push_back(root->val);
        ca(root->right, v1);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>v1;
        ca(root, v1);


        return v1;
    }
};