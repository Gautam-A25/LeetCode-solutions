class Solution {
public:
    char kthCharacter(int k) {
        string res = "a";
        while( res.size() < k){
            string temp;
            for(char c: res){
                temp += ++c;
            }
            res += temp;
        }
        return res[k-1];
    }
};