class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        
        //split the word
        stringstream str(s);
        string word;
        
        //join the words
        while(str >>word){
            ans=word+ " "+ ans;
        }
        ans.pop_back();
        return ans;
    }
};