class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len=digits.size();
        int count=0;
        for(int i=len-1;i>=0;i--){
            if(digits[i]==9){
                count++;
                digits[i]=0;
            }

            else{
                digits[i]=digits[i]+1;
                
                break;
            }
        }
          
        if(count==len){
                digits.push_back(1);                     //to tackle the case[9,9,9,9]
                reverse(digits.begin(),digits.end());
                return digits;
            }
        
        return digits;
        
    }
};