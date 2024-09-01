class Solution {
public:
    string reversePrefix(string word, char ch) {
        int idx = 0;
        for(int i=0; i<word.size(); i++){
            if(word[i]==ch){
                idx=i;
                char temp;
                for(int j=0; j<=idx; j++){
                    temp = word[j];
                    word[j]=word[idx];
                    word[idx]=temp;

                    idx--;
                }
                break;
            }
        }  
        return word;
    }
};