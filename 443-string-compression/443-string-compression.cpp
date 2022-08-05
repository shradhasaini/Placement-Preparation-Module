class Solution {
public:
    int compress(vector<char>& s) {
     int n=s.size();
       string ans="";
        int cnt=1;
        for(int  i=1; i<n; i++)
        {
            if(s[i]==s[i-1]){cnt++;//cout<<cnt<<endl;
                            }
             else{
                 if(cnt==1){
                     ans+=(s[i-1]);
                     cnt=1;
                     
                 }
                 else{
                 ans+=(s[i-1]);
            ans+=to_string(cnt);
                     cnt=1;
                 }
             }
        }
                  if(cnt==1){
                     ans+=(s[n-1]);
                    
                 }
                 else{
                 ans+=(s[n-1]);
                ans+=to_string(cnt);
                 }
        int i=0;
  for(char c:ans){
      s[i++]=c;
  
  }

   return ans.size();
    }
}; 