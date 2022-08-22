class Solution {
public:
    int maxL=INT_MIN;
    string ans;
    void isPalin(int l, int r, int n, string s)
    {
        while(l>-1 && r<n && s[l]==s[r])
        {
            if(maxL < r-l+1)
            {
                maxL = r-l+1;
                ans = s.substr(l,r-l+1);
            }
            l--,r++;
        }
    }
    string longestPalindrome(string s) {
        int n = s.size();
        for(int i=0;i<n;i++)
        {
            // For Odd length
            isPalin(i,i,n,s);
            // For Even length
            isPalin(i,i+1,n,s);
        }
        return ans;
    }
};