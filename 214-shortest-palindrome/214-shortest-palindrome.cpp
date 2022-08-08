class Solution {
public:
    long long base = 31 , mod = 1011001110001111;
    string shortestPalindrome(string s) {
          long long frontHash = 0 , backHash = 0 , power = 1;
          string suff = "";
          int R = 0;
          for(int i=0; i<s.size(); i++) {
               frontHash = (frontHash + (power * (s[i] - 'a' + 1))%mod)%mod;
               backHash = ((backHash*base)%mod + (s[i] - 'a' + 1))%mod;
               if(frontHash == backHash) {
                    R = i;
               }
               power = (power * base)%mod;
          }
        for(int i=s.size()-1; i>R; i--) suff+=s[i];
        return suff + s;
    }
};