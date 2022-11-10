#define _CRT_SECURE_NO_WARNINGS 1
//
//class Solution {
//public:
//    /**
//     *
//     * @param root TreeNode类
//     * @param sum int整型
//     * @return bool布尔型
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
//     * @param root TreeNode类
//     * @return int整型
//     */
//    int maxDepth(TreeNode* root) {
//        if (root == NULL) return 0;
//        return max(maxDepth(root->left), maxDepth(root->right)) + 1;
//    }
//};
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param root TreeNode类
     * @return int整型vector
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