1class Solution {
2public:
3    string removeDuplicates(string s) {
4        stack<char> st;
5        for (int i = 0; i < s.length(); i++) {
6            if (st.empty() || st.top() != s[i])
7                st.push(s[i]);
8            else if (st.top() == s[i])
9                st.pop();
10        }
11        if(st.empty()) return "";
12        s="";
13        while(!st.empty()){
14            s=st.top()+s;
15            st.pop();
16        }
17        return s;
18    }
19};