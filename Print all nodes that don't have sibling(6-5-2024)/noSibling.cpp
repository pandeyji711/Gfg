struct Node
 {
     int data;
     Node* left, *right;
}; 


 void solve(Node *node,vector<int>&v )
 {
     if(node==nullptr)
     return;
     if((node->left==nullptr)^(node->right==nullptr))
     {
         if(node->left!=nullptr)
         v.push_back(node->left->data);
         else
          v.push_back(node->right->data);
         
     }
     solve(node->left,v);
     solve(node->right,v);
     
 }
vector<int> noSibling(Node* node)
{
    // code here
    vector<int>ans;
    solve(node,ans);
    sort(ans.begin(),ans.end());
    return ans.size()==0?vector<int>{-1}:ans;
}
