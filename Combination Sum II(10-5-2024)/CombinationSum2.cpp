class Solution{
public:
set<vector<int>>ans;
   void  solve(vector<int> &arr,int n,int ind,vector<int>&v,int sum,int k){
       if(sum>k)return;
       if(ind>=n){
           if(sum==k)
       ans.insert(v);
       return;
       }
         v.push_back(arr[ind]);
       solve(arr,n,ind+1,v,sum+arr[ind],k);
       v.pop_back();
       solve(arr,n,ind+1,v,sum,k);
   }

    vector<vector<int>> CombinationSum2(vector<int> arr,int n,int k)
    {
        //code here
        vector<int>v;
       sort(arr.begin(),arr.end());
        vector<vector<int>>ans1;
          solve(arr,n,0,v,0,k);
        for(auto a1:ans)
        {
            ans1.push_back(a1);
        }
        
        return ans1;
    }
};