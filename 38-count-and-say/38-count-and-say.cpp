class Solution {
public:
    vector<pair<int,int>>vp;
    string ans="1";
    void find_ans(string s)
    {
        vp.clear();
        for(int i=0;i<s.size();)
        {
            int pos=i+1,cnt=1;
            while(pos<s.size()&&s[i]==s[pos]){
                cnt++;
                pos++;
            }
            vp.push_back({cnt,s[i]-'0'});
            i=pos;
        }
    }
    void merge_ans()
    {
        for(auto c:vp)
        {
            string s=to_string(c.first)+to_string(c.second);
            ans+=s;
        }
    }
    string countAndSay(int n) {
        for(int i=2;i<=n;i++)
        {
          
           find_ans(ans);
           ans="";
           merge_ans(); 
        }
        return ans;
    }
};
