class Solution {
    public:
        bool backspaceCompare(string s, string t) {
            int i = s.size() - 1, j = t.size() - 1, stepS = 0, stepT = 0;
    
            while(i>=0 || j>=0){
                while(i>=0){
                    if(s[i] == '#') {
                        stepS++;
                        i--;}
                    else if(stepS>0){
                        stepS--;
                        i--;
                    }
                    else break;
                }
                while(j>=0){
                    if(t[j] == '#') {
                        stepT++;
                        j--;}
                    else if(stepT>0){
                        stepT--;
                        j--;
                    }
                    else break;
                }
                if(i>=0 && j>=0 && s[i]!= t[j]) return false;
                if((i>=0) != (j>=0)) return false;
                i--;
                j--;
            }
            return true;
        }
    };