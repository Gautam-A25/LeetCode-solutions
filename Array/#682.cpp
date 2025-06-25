class Solution {
    public:
        int calPoints(vector<string>& operations) {
            vector<int> record;
            for(auto c: operations){
                if(c == "+"){
                    if(record.size()>=2){
                        record.push_back(record[record.size()-1]+record[record.size()-2]);
                    }
                }
                else if(c == "D"){
                    if(!record.empty()){
                        record.push_back(2*record[record.size()-1]);
                    }
                }
                else if(c == "C"){
                   if(!record.empty()){
                        record.pop_back();
                    } 
                }
                else{
                    record.push_back(stoi(c));
                }
                }
                return accumulate(record.begin(), record.end(),0);
            }
        };