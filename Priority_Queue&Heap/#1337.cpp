class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        unordered_map<int, int> mp;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int,int>>> pq;
        vector<int> ans;
        for(int i = 0; i<mat.size(); i++){
            for(int j = 0; j< mat[i].size(); j++){
                if(mat[i][j] == 1){
                    mp[i]++;
                }
            }
            pq.push({mp[i], i});
        }

        while(k>0){
            pair p = pq.top();
            pq.pop();
            
            ans.push_back(p.second);

            k--;
        }
        return ans;
    }
};