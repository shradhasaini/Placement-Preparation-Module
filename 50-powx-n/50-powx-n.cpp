class Solution {
public:
    double myPow(double x, int n) {
        if(n>0)
            return(pow(x,n-1)*x);
        else if (n<0)
            return(pow(x,n+1)/x);
        else 
            return 1;
    }
};