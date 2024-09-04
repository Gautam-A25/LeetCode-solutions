class Solution {
public:

 set<vector<int>>s;
   void fn(vector<int>&a, int t,int i,vector<int>v,int sum){
    if(sum==t){
        sort(v.begin(),v.end());
        s.insert(v);return ;
    }
   for(int j=i;j<a.size();j++){
    if(j>i&&a[j]==a[j-1])continue;
    if(sum+a[j]<=t){
        v.push_back(a[j]);
        fn(a,t,j+1,v,sum+a[j]);
        v.pop_back();
      }
   }

   }
    vector<vector<int>> combinationSum2(vector<int>& a, int t) {
       sort(a.begin(),a.end());
        fn(a,t,0,{},0);
          vector<vector<int>>V(s.begin(),s.end());
        return V;
    }
};