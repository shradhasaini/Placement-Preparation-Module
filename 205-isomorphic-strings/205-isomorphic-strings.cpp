class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> uMap;
        for(int i = 0; i < s.size(); ++i)
        {
            if(uMap.find(s[i]) != uMap.end() && uMap[s[i]] != t[i])
                return false;
            uMap[s[i]] = t[i];
        }
        uMap.clear();
        for(int i = 0; i < t.size(); ++i)
        {
            if(uMap.find(t[i]) != uMap.end() && uMap[t[i]] != s[i])
                return false;
            uMap[t[i]] = s[i];
        }
        return true;
    }
};