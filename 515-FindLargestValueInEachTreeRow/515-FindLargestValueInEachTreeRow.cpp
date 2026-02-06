// Last updated: 2/6/2026, 2:31:00 PM
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int> ans;
        queue<TreeNode*> q;
        q.push(root);
        if(root==NULL) return ans;
        while(!q.empty()){
            int size = q.size();
            vector<int>level;
            int levelmax = INT_MIN;
            for(int i = 0; i < size; i++ ){
                TreeNode *node = q.front(); q.pop();

                levelmax = max(levelmax, node->val);

                if(node->left !=NULL) q.push(node->left);
                if(node->right !=NULL) q.push(node->right);

            }
            ans.push_back(levelmax);   
        }
    return ans;
    }
};