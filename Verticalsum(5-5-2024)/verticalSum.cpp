struct Node{
int data;
Node *left,*right;
};

class Solution{
  public:
  void solve(Node *root,int pos,map<int,int>&m){
      if(root==nullptr)
      return;
      m[pos]+=root->data;
      solve(root->left,pos-1,m);
      solve(root->right,pos+1,m);
      
  }
    vector <int> verticalSum(Node *root) {
        // add code here.
        map<int,int>m;
        solve(root,0,m);
        vector<int>ans;
        for(auto a1:m)
        {
            ans.push_back(a1.second);
        }
        return ans;
    }
};