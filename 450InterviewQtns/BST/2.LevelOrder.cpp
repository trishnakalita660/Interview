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
    
    vector<int> dummy;
    vector<vector<int>> answer;
    int level =0;
    void helper(TreeNode* root){
     queue<TreeNode*> qu;
        qu.push(root);
        
        while(!qu.empty()){
            int n = qu.size();
            level++;
            
            for(int i=0;i<n;i++){
                TreeNode* node = qu.front();
                qu.pop();
                
                dummy.push_back(node->val);
                if(node->left){ qu.push(node->left);}
                if(node->right){ qu.push(node->right);}
            }
            
            answer.push_back(dummy);
            
            for(int i=0;i<n;i++){
                dummy.pop_back();
            }
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
      if(root == NULL) return {};  
     helper(root);
     return answer;  
    }
};


