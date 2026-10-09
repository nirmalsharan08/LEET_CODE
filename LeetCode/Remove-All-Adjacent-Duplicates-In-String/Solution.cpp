1class Solution {
2public:
3    string removeDuplicates(string s) {
4        stack<char> st;
5        for (char c : s) {
6            if (!st.empty() && st.top() == c) {
7                st.pop();
8            } else {
9                st.push(c);
10            }
11        }
12        string res = "";
13        while (!st.empty()) {
14            res.push_back(st.top()); 
15            st.pop();
16        }
17        reverse(res.begin(), res.end()); 
18        return res;
19    }
20};