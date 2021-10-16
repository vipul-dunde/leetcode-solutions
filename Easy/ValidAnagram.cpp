class Solution {
public:
    bool isAnagram(string s, string t) {
        
        map<char, int> hashMap1;
        map<char, int> hashMap2;
        
        for(int i=0; i<s.length(); i++)
        {
            hashMap1[s[i]]++;
        }
        
        for(int i=0; i<t.length(); i++)
        {
            hashMap2[t[i]]++;
        }
        
        string m;
        if (s.length()>t.length()) {
            m = s;
        }else{
            m = t;
        }
        
        for(int i=0; i<m.length(); i++)
        {
            if (hashMap1[m[i]]!=hashMap2[m[i]]) {
                return false;
            }
        }
        
        return true;
    }
};