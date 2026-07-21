class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string a="", b="";
        for(int i=0;i<s.size();i++)
        {
            if(a.size()!=0 && s[i]=='#') a.erase(a.size()-1,1);
            else if(s[i]!='#') a+=s[i];
        }
        for(int i=0;i<t.size();i++)
        {
            if((b.size()!=0) && (t[i]=='#')) b.erase(b.size()-1,1);
            else if(t[i]!='#') b+=t[i];
        }
        if(a==b) return true;
        return false;
    }
};