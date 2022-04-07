class Solution {
public:
    bool isValid(string s)
    {
        int len = s.size();
        if (s.length() % 2 != 0)
        {
            return false;
        }
        if (s[0] == ')' || s[0] == '}' || s[0] == ']')
        {
            return false;
        }
        
        stack<char> st;
        
        for (int i = 0; i < len; i++)
        {
            if (!st.empty() && st.top() == '(' && s[i] == ')')
            {
                st.pop();
            }
            else if (!st.empty() && st.top() == '{' && s[i] == '}')
            {
                st.pop();
            }
            else if (!st.empty() && st.top() == '[' && s[i] == ']')
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
        return st.empty();
    }
};