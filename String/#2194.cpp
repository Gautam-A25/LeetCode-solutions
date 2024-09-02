class Solution {
public:
    vector<string> cellsInRange(string s) {
        char idx1=s[0];
        char idx2=s[3];
        int numIdx1=s[1] - '0';
        int numIdx2=s[4] - '0';
        vector<string> result;

        for(int i=idx1; i<=idx2; i++){
            for(int j=numIdx1; j<=numIdx2; j++){
                result.push_back(string(1, i) + to_string(j));
            }
        }

        return result;
    };
};