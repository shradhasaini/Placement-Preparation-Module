class Solution {
public:
	bool isPalindrome(int x) {
        
    	string s = to_string(x);
		int len = s.length()-1;
		int i = 0;
		while(i < len){
			if(s[i] != s[len]){
				return false;
			}
			i++;
			len--;
		}
		return true;
	}
};