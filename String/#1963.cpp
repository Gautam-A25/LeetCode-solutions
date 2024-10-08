class Solution {
public:
    int minSwaps(string s) {
        int unmatched = 0, max_unmatched = 0;

        for(char bracket: s){
            if (bracket == '['){
                unmatched--;
            }
            else{
                unmatched++;
            }
            max_unmatched = max(max_unmatched, unmatched);
        }
        return (max_unmatched+1)/2;
    }
};