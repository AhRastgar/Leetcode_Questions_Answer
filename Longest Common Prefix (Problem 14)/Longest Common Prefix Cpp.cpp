class Solution {
public:
    string longestCommonPrefix(vector<string>& strs)
    {
        string s = strs[0];
        
        for (int i = 0; i < s.length(); i++)
        {
            for (int j = 1; j < strs.size(); j++)
            {
                if (strs[j][i] != s[i])
                {
                    s.erase(s.begin() + i , s.end());
                    return s;
                }
            }
        }
        return s;
    }
};