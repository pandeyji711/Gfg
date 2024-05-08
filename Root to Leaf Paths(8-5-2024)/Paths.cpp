/*

Definition for Binary Tree Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
  vector<vector<int>>ans1;
   void solve(Node* root,vector<int>v)
   {
       
       if(root==nullptr)
       return ;
       if(root->left==nullptr&&root->right==nullptr)
       {  v.push_back(root->data);
           ans1.push_back(v);
           return;
       }
       v.push_back(root->data);
       solve(root->left,v);
       solve(root->right,v);
   }
    vector<vector<int>> Paths(Node* root) {
        // code here
        vector<int>v;
         solve(root,v);
       
        return ans1;
    }
};
