class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (int i=0; i<s.length(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                st.push(s[i]);
            else {
                if (st.empty())
                    return false;
                char check = st.top();
                if (check == '(' && s[i] == ')' ||
                    check == '{' && s[i] == '}' ||
                    check == '[' && s[i] == ']'
                )
                    st.pop();
                else
                    st.push(s[i]);
            }
        }
        if (st.empty())
            return true;
        else
            return false;
    }
};
