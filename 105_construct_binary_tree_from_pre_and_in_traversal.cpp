/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 * 这个题重点是在于想清楚，1.查找的方式，这里是dfs
   2.什么时候加入到左结点，什么时候右
   3.栈的正确使用
 */

class Solution {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& preorder) {
        if (preorder.empty()) return NULL;
        
        TreeNode *cur, *right, *left;
        TreeNode *root = new TreeNode(inorder[0]);
        stack<TreeNode*> s;
        s.push(root);
        int p = 0, i = 1, flag = 0;
        while (i < inorder.size()) {
            if (!s.empty() && s.top()->val == preorder[p]) {
                cur = s.top();
                s.pop();
                flag = 1;
                ++p;
            }
            else {
                if (flag == 0) {
                    left = new TreeNode(inorder[i]);
                    s.top()->left = left;
                    s.push(left);
                    ++i;
                }
                else {
                    right = new TreeNode(inorder[i]);
                    cur->right = right;
                    s.push(right);
                    flag = 0;
                    ++i;
                }
            }
        }
        return root;
    }
};
//下面这个递归的思路更清晰
class Solution {
    TreeNode* build(vector<int>& preorder, vector<int>& inorder, int preorder_start, int inorder_start,int size)
    {
        if(size<=0) {
            return NULL;
        }
        TreeNode* root = new TreeNode(preorder[preorder_start]);
        int i;
        for(i = 0; i<size; i++) {
            if(inorder[i+inorder_start] == preorder[preorder_start]) {
                break;
            }
        }
        if(i>=size) {
            return NULL;
        }
        root->left = build(preorder,inorder,preorder_start+1,inorder_start,i);
        root->right = build(preorder,inorder,preorder_start+i+1, inorder_start+i+1,size - i-1);
        
        return root;       
        
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size();
        if(n!=inorder.size()) {
            return NULL;
        }
        return build(preorder, inorder, 0, 0, n);
                
    }
};