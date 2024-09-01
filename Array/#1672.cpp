class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int wealth = 0;
        int tempWealth = 0;
        for(int i=0; i<accounts.size(); i++){
            for(int j=0; j<accounts[i].size(); j++){
                tempWealth += accounts[i][j];
            }
            if(wealth<tempWealth){
                wealth=tempWealth;
            }
            tempWealth=0;
        }
        return wealth;
    }
};