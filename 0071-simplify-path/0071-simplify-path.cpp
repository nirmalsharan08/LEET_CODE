class Solution {
public:
    string simplifyPath(string path) {
        stack<string> res;
        string s="";
        if(path.back()!='/')
            path+='/';
        for(auto x: path){
            if(x!='/')

                s+=x;
            else{
                if(s==".." ){
                    if(!res.empty())
                        res.pop();
                }
                else if(s!="." && !s.empty())
                    res.push(s);
                
                s.clear();
            }
        }
        string ans="";
        while(!res.empty()) {
            ans= "/" + res.top() + ans;
            res.pop();
        }
        return ans.empty() ? "/" : ans;
    }
};