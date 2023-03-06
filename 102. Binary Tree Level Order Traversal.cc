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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root) return ans;
        queue<TreeNode*> q; //Queue for BFS
        q.push(root);
        while(!q.empty()){
            int size = q.size(); //Get the size of the queue
            vector<int> level; //Vector for the current level
            for(int i = 0; i < size; i++){
                TreeNode* curr = q.front(); //Get the front element
                q.pop(); //Remove the front element
                level.push_back(curr->val); //Add the value to the current level
                if(curr->left) q.push(curr->left); //Add the children to the queue
                if(curr->right) q.push(curr->right); //Add the children to the queue
            }
            ans.push_back(level);
        }
        return ans;
    }
};