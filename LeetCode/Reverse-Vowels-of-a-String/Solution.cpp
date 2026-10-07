1class Solution {
2public:
3    string reverseVowels(string s) {
4        stack<char> st;
5        for(int i=0;i<s.length();i++){
6            if( s[i]=='a'|| s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||
7                s[i]=='A'|| s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
8                st.push(s[i]);
9        }
10        for(int i=0;i<s.length();i++){
11            if( s[i]=='a'|| s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||
12                s[i]=='A'|| s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
13                    s[i]=st.top();
14                    st.pop();
15            }
16        }   
17        return s; 
18    }
19};