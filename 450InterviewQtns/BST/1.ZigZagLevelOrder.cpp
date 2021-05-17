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
        int level=0;
        vector<int> v;
        vector<vector<int>> ans;
        void helper(TreeNode* root) {
            
            queue<TreeNode*> q;
            q.push(root);
            while(!q.empty()){
                int n= q.size();
                level++;
    //           Inserts leaf nodes of each nodes   
                for(int i=0; i<n;i++){
                    TreeNode* node = q.front();
                    q.pop();
                    v.push_back(node->val);
                    if(node->left) { q.push(node->left);}
                    if(node->right) { q.push(node->right);}
                }
                if(level%2 ==0){
                    reverse(v.begin(),v.end());
                    ans.push_back(v);
                }
                else{
                    ans.push_back(v);
                }
                for(int i=0;i<n;i++){
                    v.pop_back();
                }
            }
          
        }
          
              
        
        vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
            if(root == NULL) return {};  
         helper(root);
         return ans; }
    };