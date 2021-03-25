class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return judgeroot(root->left,root->right);
    }
    bool judgeroot(TreeNode* left1,TreeNode* right1){
        if(!left1&&!right1)
            return true;
        if(!left1||!right1)
            return false;
        if(left1->val == right1->val)
            return judgeroot(left1->left,right1->right)&&judgeroot(left1->right,right1->left);
        return false;
    }
};
