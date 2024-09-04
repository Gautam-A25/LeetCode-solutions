class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> vp;
        int i=0,n=s.size();
        read(i,n,s,vp,ans);
        return ans;
    }
private:
    bool check(string& sub){
        int m=sub.size();
        if(m==1) return true;
        int s=0,e=m-1;
        while(s<e){
            if(sub[s]!=sub[e]) return false;
            s++;
            e--;
        }
        return true;
    }
    void read(int i,int& n,const string& s,vector<string>& vp,vector<vector<string>>& ans){
        if(i==n){
            ans.push_back(vp);
        }
        else{
            for(int j=i;j<n;j++){
                string sub=s.substr(i,j-i+1);
                if(check(sub)){
                    vp.push_back(sub);
                    read(j+1,n,s,vp,ans);
                    vp.pop_back();
                }
            }
        }
    }
};