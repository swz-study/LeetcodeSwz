int minDepth(TreeNode *root){
	if(root == NULL){
		return 0;
	}
	if(root->left == NULL && root->right == NULL){
		return 1;
	}
	int min_depth = INT_MAX;
	if(root->left != NULL){
		mid_depth = min(minDepth(root->left),min_depth);
	} 
	if(root->right != NULL){
		mid_depth = min(minDepth(root->left),min_depth);
	}
	return min_depth+1;
} 
