class Solution {
public:
    bool isAnagram(string s, string t) {
        int x=s.length();
        int y=t.length();
        if(x!=y){
            return false;
        }
        int arr[26];
        for(char ch : s){
            arr[ch-'a']++;
        }
        for(char c : t){
            if(arr[c -'a']==0){
                return false;
            }
            arr[c -'a']--;
        }
        return true;

    }
};