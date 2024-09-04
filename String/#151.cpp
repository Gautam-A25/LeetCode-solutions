class Solution {
public:
    string reverseWords(string s)
    {
        string ans;
        int i=s.length()-1;
        while (i>=0)
        {
            if (s[i]==' ')
                i--;
            else
            {
                string str="";
                while (i>=0 && s[i]!=' ')
                {
                    str+=s[i];
                    i--;
                }
                reverse(str.begin(), str.end());
                ans+=str+" ";
            }
        }
        if (!ans.empty())
            ans.pop_back();
        return ans;
    }
};
