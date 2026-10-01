1class Solution {
2public:
3    bool isValid(string s) {
4        stack<char> st;
5        for (char x : s) {
6            if (x == '(' || x == '[' || x == '{') {
7                st.push(x);
8            } else {
9                if(st.empty())
10                    return false;
11                if (x == ')') {
12                    if (st.top() != '(')
13                        return false;
14
15                    else {
16                        if (!st.empty())
17                            st.pop();
18                    }
19                } else if (x == '}') {
20                    if (st.top() != '{')
21                        return false;
22                    else if (!st.empty())
23                        st.pop();
24                } else if (x == ']') {
25                    if (st.top() != '[')
26                        return false;
27                    else if (!st.empty())
28                        st.pop();
29                }
30            }
31        }
32        return st.empty();
33    }
34};