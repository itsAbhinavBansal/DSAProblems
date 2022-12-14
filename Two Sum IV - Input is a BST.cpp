class Solution {
public:
    vector<int>v;
    void inorder(TreeNode* root){
        if(!root)return;
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
    bool findTarget(TreeNode* root, int k) {
        inorder(root);
        int left=0;
        int right=v.size()-1;
        while(left<right){
            if(v[left]+v[right]==k){
                return true;
            }
            else if(v[left]+v[right]<k){
                left++;
            }
            else{
                right--;
            }
        }
        return false;
    }
};