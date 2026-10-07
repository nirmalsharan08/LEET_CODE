class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string temp = "";
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ' && temp == "")
                continue;
            else if (s[i] == ' ' && temp != "") {
                st.push(temp);
                temp = "";
            } else
                temp.push_back(s[i]);
        }
        if (!temp.empty()) {
            st.push(temp);
            temp = "";
        }
        while (!st.empty()) {
            temp+=st.top();
            st.pop();
            if(!st.empty())
                temp+=' ';
        }
        return temp;
    }
};