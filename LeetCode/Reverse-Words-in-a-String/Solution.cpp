1class Solution {
2public:
3    string reverseWords(string s) {
4        stack<string> st;
5        string temp = "";
6        for (int i = 0; i < s.length(); i++) {
7            if (s[i] == ' ' && temp == "")
8                continue;
9            else if (s[i] == ' ' && temp != "") {
10                st.push(temp);
11                temp = "";
12            } else
13                temp.push_back(s[i]);
14        }
15        if (!temp.empty()) {
16            st.push(temp);
17            temp = "";
18        }
19        while (!st.empty()) {
20            temp+=st.top();
21            st.pop();
22            if(!st.empty())
23                temp+=' ';
24        }
25        return temp;
26    }
27};