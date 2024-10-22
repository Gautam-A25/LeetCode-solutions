class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int, int>> pq;
        for(int i = 0; i<score.size(); i++){
            pq.push({score[i], i});
        }
        
        vector<string> result(score.size());
        int rank = 1;
        while(!pq.empty()){
            int index = pq.top().second;
            if(rank==1){
                result[index] = "Gold Medal";
            }
            else if(rank==2){
                result[index] = "Silver Medal";
            }
            else if(rank==3){
                result[index] = "Bronze Medal";
            }
            else{
                result[index] = to_string(rank);
            }
            rank++;
            pq.pop();
        }
        return result;
    }
};