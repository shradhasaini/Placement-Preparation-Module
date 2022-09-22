class Solution 
{
public:
    bool isPalindrome(int x) 
    {
        int tmp = x;
        long long chk = 0;
        while(tmp>0)
        {
            chk*=10;
            chk+=(tmp%10);
            tmp/=10;
        }
        if(chk==x)
        {
            return true;
        }
        
        return false;
    }
};