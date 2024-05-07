struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
  void solve(Node *root,int level,map<int,vector<int>>&m)
  {
      if (root==nullptr)
      return ;
       m[level].push_back(root->data);
       solve(root->left,level+1,m);
       solve(root->right,level+1,m);
      
       

  }
vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<int>ans;
    map<int,vector<int>>m;
    vector<vector<int>>v1;
    solve(root,0,m);
    for(auto a1:m)
    {   vector<int>v;
        for(int i=0;i<a1.second.size();i++)
        {
            v.push_back(a1.second[i]);
        }
        v1.push_back(v);
    }
    int n=v1.size();
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<v1[i].size();j++)
        {
            ans.push_back(v1[i][j]);
        }
    }
    return ans;