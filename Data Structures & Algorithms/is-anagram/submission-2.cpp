class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
        return false;
        map<char,int> a;
        map<char,int> b;

        for(int i=0;i<s.size();i++){
            a[s[i]]++;
            b[t[i]]++;
        }

        if(a!=b)
        return false;
        else
        return true;

        /*s.sort();
        t.sort();
        if(s.size()!=t.size())
        return false;
        else{
            for(int i=0;i<s.size();i++){
                if(s[i]!=t[i])
                return false;
            }
            return true;
        }

        
    */}
};
