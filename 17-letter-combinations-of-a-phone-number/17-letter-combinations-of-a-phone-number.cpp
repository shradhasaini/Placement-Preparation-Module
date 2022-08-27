class Solution {
public:

vector<string> letterCombinations(string digits) {
    
    unordered_map<char , string > m;
    
     m['2'] = "abc";
     m['3'] = "def";
     m['4'] = "ghi";
     m['5'] = "jkl";
     m['6'] = "mno";
     m['7'] = "pqrs";
     m['8'] = "tuv";
     m['9'] = "wxyz";
    
    vector<string> ans;
    
   if(digits.size() == 0){
       
       return ans;
    
   }else if(digits.size() == 1){
        
        for(auto ch : m[digits[0]]){
            
            string temp = "";
            temp += ch;
            ans.push_back(temp);
        }
        
        return ans;
        
    }else if(digits.size() == 2){
        
        for(auto ch1 : m[digits[0]]){
            
            for(auto ch2 : m[digits[1]]){
                
                string temp = "";
                
                temp += ch1;
                temp += ch2;
                
                ans.push_back(temp);
            }
        }
        
        return ans;
        
    }else if(digits.size() == 3){
        
        for(auto ch1 : m[digits[0]]){
            
            for(auto ch2 : m[digits[1]]){
                
                for(auto ch3 : m[digits[2]]){
                    
                    string temp = "";
                
                    temp += ch1;
                    temp += ch2;
                    temp += ch3;
                
                    ans.push_back(temp);
                }
                
            }
        }
        
    }else{
        
        for(auto ch1 : m[digits[0]]){
            
            for(auto ch2 : m[digits[1]]){
                
                for(auto ch3 : m[digits[2]]){
                    
                    for(auto ch4 : m[digits[3]]){
                        
                        string temp = "";
                
                        temp += ch1;
                        temp += ch2;
                        temp += ch3;
                        temp += ch4;
                
                        ans.push_back(temp);
                    }
                }
                
            }
        }
        
    }
    
    return ans;
}
};