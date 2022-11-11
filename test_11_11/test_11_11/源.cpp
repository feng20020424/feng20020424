//#define _CRT_SECURE_NO_WARNINGS 1
///**
// * struct TreeNode {
// *	int val;
// *	struct TreeNode *left;
// *	struct TreeNode *right;
// * };
// */
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


/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
*/
//class Solution {
//public:
//
//    bool js(TreeNode* p1, TreeNode* p2)
//    {
//        if (!p1 && !p2)
//        {
//            return true;
//        }
//        if (!p1 || !p2)
//        {
//            return false;
//        }
//        if (p1->val != p2->val)
//        {
//            return false;
//        }
//        return js(p1->left, p2->right) && js(p1->right, p2->left);
//
//
//    }
//    bool isSymmetrical(TreeNode* pRoot) {
//        if (!pRoot)
//        {
//            return true;
//        }
//
//        return js(pRoot->left, pRoot->right);
//    }
//
//};