class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> record;

        for(const string& op: operations){
            if(op == "C"){
                if(!record.empty()){
                    record.pop_back();
                }
            }
            else if(op == "D"){
                if(!record.empty()){
                    record.push_back(2*record.back());
                }
            }
            else if(op == "+"){
                if(record.size() >= 2){
                    record.push_back(record[record.size() - 1] + record[record.size() - 2]);
                }
            }
            else{
                record.push_back(stoi(op));
            }
        }
        return accumulate(record.begin(), record.end(), 0);
    }
};