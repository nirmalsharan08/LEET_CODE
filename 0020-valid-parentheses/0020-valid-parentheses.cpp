class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (auto x : s) {
            if (x == '{' || x == '(' || x == '[')
                st.push(x);

            else {
                if (st.empty())
                    return 0;
                if (x == ')') {
                    if (st.top() != '(')
                        return 0;
                    else {
                        if (!st.empty())
                            st.pop();
                    }
                }

                else if (x == '}') {
                    if (st.top() != '{')
                        return 0;
                    else {
                        if (!st.empty())
                            st.pop();
                    }
                }

                else if (x == ']') {
                    if (st.top() != '[')
                        return 0;
                    else {
                        if (!st.empty())
                            st.pop();
                    }
                }
            }
        }
        return st.empty();
    }
};