/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        
        if (inorder.empty()) return NULL;
            
        TreeNode *left, *right, *cur;
        int len = inorder.size(), i = len - 1, p = len - 2, flag = 1;
        TreeNode *root = new TreeNode(postorder[len-1]);
        stack<TreeNode*> s;
        s.push(root);
        while(p >= 0) {

            if (!s.empty() && s.top()->val == inorder[i]) {
                cur = s.top();
                s.pop();
                --i;
                flag = 0;
            }
            else {
                if (flag) {
                    right = new TreeNode(postorder[p]);
                    s.top()->right = right;
                    s.push(right);
                    --p;
                }
                else {
                    left = new TreeNode(postorder[p]);
                    cur->left = left;
                    s.push(left);
                    --p;
                    flag = 1;
                }
            }

        }  
        
        return root;
    }
};