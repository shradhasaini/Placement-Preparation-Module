class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int i = 0 , other = 0 , ans = right;
        while(1){
            int x = (right>>i);
            if(x == 0){
                return 0;
            }
            int temp = (1<<i);
            int curr = ans;
            if(x&1)curr ^=temp;
            if((curr+other) < left){
                break;
            }
            ans = curr;
            other += (1<<i);
            i++;
        }
        return ans;
    }
};